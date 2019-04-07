// Fill out your copyright notice in the Description page of Project Settings.
// Created by Danny Lam, 03/28/2019

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTaskMoveToPlayer.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTTaskMoveToPlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	/** Notify called after GameplayTask changes state to Active (initial activation or resuming) */
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;

	/** Notify called after GameplayTask changes state from Active (finishing or pausing) */
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
