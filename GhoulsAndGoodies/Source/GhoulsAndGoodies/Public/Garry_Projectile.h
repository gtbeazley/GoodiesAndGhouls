// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "Garry_Projectile.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AGarry_Projectile : public AProjectile
{
	GENERATED_BODY()
public:
    AGarry_Projectile();

    virtual void OnColliderOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult) override;
};
