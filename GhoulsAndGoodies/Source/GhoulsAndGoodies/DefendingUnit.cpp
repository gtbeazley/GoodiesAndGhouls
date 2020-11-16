// Fill out your copyright notice in the Description page of Project Settings.


#include "DefendingUnit.h"

#include "ConstructorHelpers.h"
#include "EnemyUnit.h"
#include "Tile.h"
#include "LifeBar_W.h"
#include "UserWidget.h"

#include "Animation/AnimSequence.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include"Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADefendingUnit::ADefendingUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; 
	
	m_capsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("DummyCapsule");
	SetRootComponent(m_capsuleComponent);
	m_capsuleComponent->SetCollisionObjectType(ECC_Pawn);

	m_mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	m_mesh->SetGenerateOverlapEvents(true);
	GetMesh()->SetupAttachment(RootComponent);
	GetMesh()->SetRelativeRotation(FRotator(0, 0, 0));
	GetMesh()->SetRelativeLocation(FVector(0, 0, 0));
	GetMesh()->SetWorldScale3D(FVector(2, 2, 2));
	GetMesh()->SetCustomDepthStencilValue(0);
	GetMesh()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
	m_mesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	GetMesh()->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);
	
	m_detectionSphere = CreateDefaultSubobject<USphereComponent>("Detection Sphere");
	m_detectionSphere->SetupAttachment(m_mesh);
	m_detectionSphere->InitSphereRadius(0);
	m_detectionSphere->SetCollisionObjectType(ECC_GameTraceChannel1);
	m_detectionSphere->SetCollisionProfileName("Detect");
	m_detectionSphere->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Ignore);
	m_detectionSphere->OnComponentBeginOverlap.AddDynamic(this, &ADefendingUnit::OnDetectionSphereOverlapBegin);
	m_detectionSphere->OnComponentEndOverlap.AddDynamic(this, &ADefendingUnit::OnDetectionSphereOverlapEnd);
	//m_detectionSphere->bHiddenInGame = false;

	m_curHealth = m_fullHealth;

	m_lifeBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("LifeBar"));
	m_lifeBarComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FClassFinder<UUserWidget>l_lifeBarClass(TEXT("Class'/Game/TopDownCPP/Blueprints/Widgets/LifeBar_WBP.LifeBar_WBP_C'"));
	if (l_lifeBarClass.Succeeded())
	{
		m_lifeBarComponent->SetWidgetClass(l_lifeBarClass.Class);
	}
	m_lifeBarComponent->SetWidgetSpace(EWidgetSpace::World);
	ULifeBar_W* l_lifeBar = Cast<ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());
	if (l_lifeBar)
	{
		l_lifeBar->m_curHealth = m_curHealth;
		l_lifeBar->m_fullHealth = m_fullHealth;
	}

	m_lifeBarComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 400.0f));
}

// Called when the game starts or when spawned
void ADefendingUnit::BeginPlay()
{
	Super::BeginPlay();

	m_curHealth = m_fullHealth;
}

// Called every frame
void ADefendingUnit::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	if (m_attackDamage > 0)
	{	
		//Attack and timer logic
		if (m_detectedEnemies.Num() > 0)
		{
			if (m_attackTimer > 0)
			{
				//Countdown the timer
				m_attackTimer -= a_deltaTime;
			}
			else
			{
				//Restart timer and Attack
				m_attackTimer = m_attackInterval;
				Attack();
			}

			//Set target vector to enemy unit position
			m_facingTarget = m_detectedEnemies[0]->GetActorLocation();

			//Face the facing target
			FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
			GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw - 90, GetActorRotation().Roll));
		}
		else
		{
			//If no enemy units are left reeset the timer
			m_attackTimer = 0;
		}

	}
	
	//Update the life bar component
	if (IsValid(m_lifeBarComponent))
	{
		FRotator l_lookAtRot = UKismetMathLibrary::FindLookAtRotation(m_lifeBarComponent->GetComponentLocation(), UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraLocation());
		m_lifeBarComponent->SetWorldRotation(FRotator(l_lookAtRot));
		ULifeBar_W* l_lifeBar = Cast<ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());
		if (l_lifeBar)
		{
			l_lifeBar->m_curHealth = m_curHealth;
			l_lifeBar->m_fullHealth = m_fullHealth;
			l_lifeBar->m_progressColour = m_lifeBarColour;
		}
	}

	//Check to see if the defence unit is still alive
	if (m_curHealth <= 0.0f)
	{
		if(m_owningTile)
		m_owningTile->DespawnUnit();
	}
}

void ADefendingUnit::Despawn()
{
	m_despawnQueued = true;

	Destroy(true, true);
}

void ADefendingUnit::DealDamage()
{
}

USkeletalMeshComponent* ADefendingUnit::GetMesh()
{
	return m_mesh;
}

void ADefendingUnit::PlaySpawnAnim()
{
	if (m_spawnAnim && m_mesh)
		m_mesh->PlayAnimation(m_spawnAnim, false);
}

void ADefendingUnit::PlayDespawnAnim()
{
	if (!m_despawnQueued)
	{
		if (m_despawnAnim)
		{
			m_despawnQueued = true;
			GetMesh()->PlayAnimation(m_despawnAnim, false);
		}
		else
			Despawn();
	}
}

void ADefendingUnit::Attack()
{
	if (m_detectedEnemies.Num() > 0)
	{
		//Face the facing target
		FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
		GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw, GetActorRotation().Roll));
	}
	//Play attack animation
	m_detectedEnemies[0]->m_curHealth -= m_attackDamage;
}

void ADefendingUnit::OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
	if (Cast<AEnemyUnit>(a_otherActor))
	{
		if (Cast<UCapsuleComponent>(a_otherComp))
			m_detectedEnemies.AddUnique(Cast<AEnemyUnit>(a_otherActor)); 
	}
}

void ADefendingUnit::OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
	if (Cast<AEnemyUnit>(a_otherActor))
	{
		m_detectedEnemies.Remove(Cast<AEnemyUnit>(a_otherActor));
	}
}

