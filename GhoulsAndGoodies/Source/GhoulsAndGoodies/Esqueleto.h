// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyUnit.h"
#include "Esqueleto.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AEsqueleto : public AEnemyUnit
{
	GENERATED_BODY()
public:
	//Constructor
	AEsqueleto();
	//Destructor
	virtual ~AEsqueleto();


	virtual void Attack() override;

	virtual void Despawn() override;

	virtual void DealDamage() override;
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackDamage = 70.0f;

};
