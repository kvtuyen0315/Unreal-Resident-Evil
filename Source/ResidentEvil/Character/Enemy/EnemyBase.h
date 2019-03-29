// Fill out your copyright notice in the Description page of Project Settings.
// Created by Danny Lam, 03/28/2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyBase.generated.h"

UCLASS()
class RESIDENTEVIL_API AEnemyBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyBase();
	AEnemyBase(const FObjectInitializer& ObjectInitializer);
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override {};
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;
protected:
	// Reference to target, will be set on begin play function
	ACharacter* CharacterTarget;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, Category = Behavior)
	class UBehaviorTree* AIBehaviorTree;
	UPROPERTY(EditAnywhere)
	class UAIPerceptionComponent* AIPereptionComp;
	UPROPERTY(EditAnywhere)
	class UAISenseConfig_Sight* AISightConfig;
	UPROPERTY(EditAnywhere)
	class UAISenseConfig_Hearing* AIHearingConfig;
	UPROPERTY(VisibleDefaultsOnly)
	class UTargetInSightInfo* TargetInSightInfo;
public:
	UBehaviorTree* GetAIBehaviorTree() const { return AIBehaviorTree; }
	UTargetInSightInfo* GetTargetInSightInfo() const { return TargetInSightInfo; }
};
