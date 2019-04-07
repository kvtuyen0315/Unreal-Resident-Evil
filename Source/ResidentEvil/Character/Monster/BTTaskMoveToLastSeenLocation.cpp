// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskMoveToLastSeenLocation.h"
#include "MonsterAIController.h"
#include "TargetInSightInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"

#define ACCEPTANCE_RADIUS 50.f

/** Notify called after GameplayTask changes state to Active (initial activation or resuming) */
void UBTTaskMoveToLastSeenLocation::OnGameplayTaskActivated(UGameplayTask& Task)
{
}


/** Notify called after GameplayTask changes state from Active (finishing or pausing) */
void UBTTaskMoveToLastSeenLocation::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
}

EBTNodeResult::Type UBTTaskMoveToLastSeenLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AMonsterAIController* AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	UTargetInSightInfo* SightInfo = Cast<UTargetInSightInfo>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetTargetInSightInfoID()));
	if (SightInfo && SightInfo->ShouldChaseTarget())
	{
		FVector Distance = SightInfo->GetLastKnownLocation() - AIController->GetPawn()->GetActorLocation();
		if (Distance.Size() < ACCEPTANCE_RADIUS) // already at goal
		{
			SightInfo->SetShouldChaseTarget(false); // don't chase anymore
			return EBTNodeResult::Failed;
		}
		else
		{
			EPathFollowingRequestResult::Type Result = AIController->MoveToLocation(SightInfo->GetLastKnownLocation(), 5.f);
			if (Result == EPathFollowingRequestResult::RequestSuccessful)
			{
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}


