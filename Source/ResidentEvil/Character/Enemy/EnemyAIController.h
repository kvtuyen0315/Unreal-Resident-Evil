// Fill out your copyright notice in the Description page of Project Settings.
// Created by Danny Lam, 03/28/2019

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(transient)
	class UBlackboardComponent* BlackboardComp;
	UPROPERTY(transient)
	class UBehaviorTreeComponent* BehaviorComp;
public:

	AEnemyAIController();

	virtual void Possess(APawn* AIPawn) override;
protected:
	// The target to attack KeyID
	uint8 EnemyKeyID;
	// Sight Info of Target ID
	uint8 TargetInSightInfoID;
	// Hearing sense info of target ID
	uint8 HearingTargetInfoID;

	// Reference to the pawn possesses the controller
	UPROPERTY(VisibleDefaultsOnly)
	class AEnemyBase* EnemyPawn;
public:
	uint8 GetEnemyKeyID() const { return EnemyKeyID; }
	uint8 GetTargetInSightInfoID() const { return TargetInSightInfoID; }
	uint8 GetHearingTargetInfoID() const { return HearingTargetInfoID; }
	
	AEnemyBase* GetEnemyPawn() const { return EnemyPawn; };

	void AttackTarget(AActor* Target);
};
