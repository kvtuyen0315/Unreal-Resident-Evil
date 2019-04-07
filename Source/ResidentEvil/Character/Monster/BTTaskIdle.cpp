// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskIdle.h"
#include "MonsterAIController.h"

EBTNodeResult::Type UBTTaskIdle::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AMonsterAIController* AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	AIController->StopMovement();
	return EBTNodeResult::Succeeded;
}

