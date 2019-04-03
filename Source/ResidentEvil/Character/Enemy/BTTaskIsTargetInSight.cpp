// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskIsTargetInSight.h"
#include "EnemyAIController.h"
#include "TargetInSightInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"

EBTNodeResult::Type UBTTaskIsTargetInSight::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyAIController* AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	UTargetInSightInfo* SightInfo = Cast<UTargetInSightInfo>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetTargetInSightInfoID()));
	if (SightInfo && SightInfo->IsTargetInSight())
	{
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}


