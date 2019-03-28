// Fill out your copyright notice in the Description page of Project Settings.

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
	uint8 EnemyKeyID;
public:
	uint8 GetEnemyKeyID() const { return EnemyKeyID; }
	
};