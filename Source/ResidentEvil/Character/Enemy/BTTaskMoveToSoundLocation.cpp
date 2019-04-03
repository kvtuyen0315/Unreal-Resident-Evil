// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskMoveToSoundLocation.h"
#include "EnemyAIController.h"
#include "TargetHearingInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"

EBTNodeResult::Type UBTTaskMoveToSoundLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyAIController* AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	UTargetHearingInfo* SightInfo = Cast<UTargetHearingInfo>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetHearingTargetInfoID()));
	if (SightInfo)
	{
		AIController->MoveToLocation(SightInfo->GetLastKnownLocation(), 5.f);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}


