// Fill out your copyright notice in the Description page of Project Settings.
// Created by Danny Lam, 03/28/2019

#pragma once

#include "CoreMinimal.h"
#include "Character/Enemy/EnemyBase.h"
#include "Perception/AIPerceptionTypes.h"
#include "Zombie.generated.h"

/**
 * 
 */
struct FAIStimulus;

UCLASS()
class RESIDENTEVIL_API AZombie : public AEnemyBase
{
	GENERATED_BODY()
public:
	AZombie(const FObjectInitializer& ObjectInitializer);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Override default setup sensing
	UFUNCTION()
	virtual void SetupEnemySensingComponent();

	UFUNCTION()
	virtual void OnSenseActors(const TArray<AActor*>& TestActors);
	UFUNCTION()
	virtual void OnUpdatedSenseActor(AActor* UpdatedActor, FAIStimulus Stimulus);

	virtual void PostInitializeComponents() override;

protected:
	UAnimSequence *Anim;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
