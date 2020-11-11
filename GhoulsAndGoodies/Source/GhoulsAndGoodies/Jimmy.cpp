// Fill out your copyright notice in the Description page of Project Settings.


#include "Jimmy.h"
#include <ConstructorHelpers.h>

#include "Animation/AnimBlueprint.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"


AJimmy::AJimmy()
{
	m_fullHealth = 600;
	m_curHealth = m_fullHealth;

	m_attackDamage = 0.0f;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_staticMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/JIMMY/JIMMY_ANIM_IDLE.JIMMY_ANIM_IDLE'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Jimmy_AnimBP.Jimmy_AnimBP_C'")); 
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_spawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/JIMMY/JIMMY_ANIM_SPAWN_Anim.JIMMY_ANIM_SPAWN_Anim'"));

	m_spawnAnim = l_spawnAnim.Object;


	GetMesh()->SetSkeletalMesh(l_staticMeshObject.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_animBlueprint.Object);
}

AJimmy::~AJimmy()
{
}

void AJimmy::BeginPlay()
{
	Super::BeginPlay();
}
