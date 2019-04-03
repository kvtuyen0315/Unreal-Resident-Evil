// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskIdle.h"
#include "EnemyAIController.h"

EBTNodeResult::Type UBTTaskIdle::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyAIController* AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	AIController->StopMovement();
	return EBTNodeResult::Succeeded;
}

