// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskMoveToPlayer.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "Engine.h"
#include "MonsterAIController.h"

/** Notify called after GameplayTask changes state to Active (initial activation or resuming) */
void UBTTaskMoveToPlayer::OnGameplayTaskActivated(UGameplayTask& Task)
{
}


/** Notify called after GameplayTask changes state from Active (finishing or pausing) */
void UBTTaskMoveToPlayer::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
}

EBTNodeResult::Type UBTTaskMoveToPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AMonsterAIController* AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	// Monster of this actor
	ACharacter* Target = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetTargetKeyID()));

	if (Target)
	{
		AIController->MoveToActor(Target, 5.f, true, true, true, 0, true);
		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Chasing Player");
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
