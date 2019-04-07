// Fill out your copyright notice in the Description page of Project Settings.
// Created by Danny Lam, 03/28/2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Structures/GameEnumName.h"
#include "MonsterBase.generated.h"

enum class EMonsterType : uint8;
enum class EMonsterAttackResult : uint8;
class UMonsterAttackPattern;

UCLASS()
class RESIDENTEVIL_API AMonsterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonsterBase(const FObjectInitializer& ObjectInitializer);
protected:
	// Functions called in constructor
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
	virtual EMonsterAttackResult AttackTarget(AActor* Target, UMonsterAttackPattern* AttackPattern);
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
	UPROPERTY(VisibleAnywhere)
	class UTargetInSightInfo* TargetInSightInfo;
	UPROPERTY(VisibleAnywhere)
	class UTargetHearingInfo* TargetHearingInfo;

	// The custom class derived from AnimInstance
	UPROPERTY(VisibleAnywhere)
	class UMonsterAnimInstance* AnimInstance;

	// Hold All Information needed
	UPROPERTY(VisibleAnywhere)
	class UMonsterStat* MonsterStat;

public:
	FORCEINLINE UBehaviorTree* GetAIBehaviorTree() const { return AIBehaviorTree; }
	FORCEINLINE UTargetInSightInfo* GetTargetInSightInfo() const { return TargetInSightInfo; }
	FORCEINLINE UTargetHearingInfo* GetTargetHearingInfo() const { return TargetHearingInfo; }
	FORCEINLINE UMonsterStat* GetMonsterStat() const { return MonsterStat; }
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
protected:
	EMonsterType MonsterType;

public:
	FORCEINLINE EMonsterType GetMonsterType() const { return MonsterType; }
};
