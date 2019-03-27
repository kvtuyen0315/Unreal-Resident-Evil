// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Enemy/EnemyBase.h"
#include "Zombie.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API AZombie : public AEnemyBase
{
	GENERATED_BODY()
public:
	AZombie(const FObjectInitializer& ObjectInitializer);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UAnimSequence *Anim;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
