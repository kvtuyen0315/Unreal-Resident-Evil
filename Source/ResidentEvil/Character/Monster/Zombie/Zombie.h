// Fill out your copyright notice in the Description page of Project Settings.
// Created by Danny Lam, 03/28/2019

#pragma once

#include "CoreMinimal.h"
#include "Character/Monster/MonsterBase.h"
#include "Perception/AIPerceptionTypes.h"
#include "Zombie.generated.h"

/**
 * 
 */
struct FAIStimulus;
class UMonsterAttackPattern;
UCLASS()
class RESIDENTEVIL_API AZombie : public AMonsterBase
{
	GENERATED_BODY()
public:
	AZombie(const FObjectInitializer& ObjectInitializer);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	// Event fires by animation
	virtual void OnAnimNotify(EAnimationType AnimationType) override;

	virtual void SetupMonsterSensingComponent();

	// Delaget events, called when see actor and called again when lose sigh of it too
	UFUNCTION()
	virtual void OnSenseActors(const TArray<AActor*>& TestActors);
	UFUNCTION()
	virtual void OnUpdatedSenseActor(AActor* UpdatedActor, FAIStimulus Stimulus);

protected:
	void OnAttackEnd();
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual EMonsterAttackResult AttackTarget(AActor* Target, UMonsterAttackPattern* AttackPattern);
};
