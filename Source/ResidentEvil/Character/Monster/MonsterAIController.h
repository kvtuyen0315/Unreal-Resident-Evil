// Fill out your copyright notice in the Description page of Project Settings.
// Created by Danny Lam, 03/28/2019

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MonsterAIController.generated.h"

/**
 * 
 */
class UMonsterAttackPattern;
UCLASS()
class RESIDENTEVIL_API AMonsterAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(transient)
	class UBlackboardComponent* BlackboardComp;
	UPROPERTY(transient)
	class UBehaviorTreeComponent* BehaviorComp;
public:

	AMonsterAIController();

	virtual void Possess(APawn* AIPawn) override;
protected:
	// The target to attack KeyID
	uint8 TargetKeyID;
	// Sight Info of Target ID
	uint8 TargetInSightInfoID;
	// Hearing sense info of target ID
	uint8 HearingTargetInfoID;

	// Reference to the pawn possesses the controller
	UPROPERTY(VisibleDefaultsOnly)
	class AMonsterBase* MonsterPawn;
public:
	uint8 GetTargetKeyID() const { return TargetKeyID; }
	uint8 GetTargetInSightInfoID() const { return TargetInSightInfoID; }
	uint8 GetHearingTargetInfoID() const { return HearingTargetInfoID; }
	
	AMonsterBase* GetMonsterPawn() const { return MonsterPawn; };

	void AttackTarget(AActor* Target, UMonsterAttackPattern* AttackPattern);
};
