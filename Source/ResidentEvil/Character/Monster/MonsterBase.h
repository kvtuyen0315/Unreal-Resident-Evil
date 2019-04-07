// Fill out your copyright notice in the Description page of Project Settings.
// Created by Danny Lam, 03/28/2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Structures/GameEnumName.h"
#include "MonsterBase.generated.h"

UCLASS()
class RESIDENTEVIL_API AMonsterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonsterBase(const FObjectInitializer& ObjectInitializer);
protected:
	// Functions in constructor
	virtual void InitializeSkeletaMesh(const char* Path);
	virtual void InitializeBehaviorTree(const char* Path);
	virtual void InitializeAnimationBluePrint(const char* Path);

	// Default interface of ACharacter, not used
	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override {};

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Control animation attack and other stuff when attack the target
	virtual void AttackTarget(AActor* Target);
protected:
	// Calculate Velocity Every frame for Animation to use
	virtual void CalculateVariableForAnimation(float DeltaTime);

protected:
	// The Behavior Tree for AI's decision
	UPROPERTY(EditAnywhere, Category = Behavior)
	class UBehaviorTree* AIBehaviorTree;

	// The Component help AI can sense player around
	UPROPERTY(EditAnywhere)
	class UAIPerceptionComponent* AIPereptionComp;

	// The config fpr the specific Senses
	UPROPERTY(EditAnywhere)
	class UAISenseConfig_Sight* AISightConfig;
	UPROPERTY(EditAnywhere)
	class UAISenseConfig_Hearing* AIHearingConfig;

	// The custom classes store the sense information
	UPROPERTY(VisibleDefaultsOnly)
	class UTargetInSightInfo* TargetInSightInfo;
	UPROPERTY(VisibleDefaultsOnly)
	class UTargetHearingInfo* TargetHearingInfo;

	// The custom class derived from AnimInstance
	UPROPERTY(VisibleDefaultsOnly)
	class UMonsterAnimInstance* AnimInstance;

	// Hold All Information needed
	class UMonsterStat* MonsterStat;
public:
	UBehaviorTree* GetAIBehaviorTree() const { return AIBehaviorTree; }
	UTargetInSightInfo* GetTargetInSightInfo() const { return TargetInSightInfo; }
	UTargetHearingInfo* GetTargetHearingInfo() const { return TargetHearingInfo; }
	UMonsterStat* GetMonsterStat() const { return MonsterStat; }
	bool IsAttacking() const;
	float GetAttackRange() const;

	UFUNCTION()
	virtual void OnAnimNotifyBegin(UAnimSequenceBase* Animation, float TotalDuration);
	UFUNCTION()
	virtual void OnAnimNotifyTick(UAnimSequenceBase* Animation, float FrameDeltaTime);
	UFUNCTION()
	virtual void OnAnimNotifyEnd(UAnimSequenceBase* Animation);
	UFUNCTION()
	virtual void OnAnimNotify(EAnimationType AnimationType);
};
