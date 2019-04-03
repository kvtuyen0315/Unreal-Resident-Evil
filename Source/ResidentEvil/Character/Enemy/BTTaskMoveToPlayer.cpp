// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskMoveToPlayer.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "Engine.h"
#include "EnemyAIController.h"

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
	AEnemyAIController* AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	// enemy of this actor
	ACharacter* Enemy = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetEnemyKeyID()));

	if (Enemy)
	{
		AIController->MoveToActor(Enemy, 5.f, true, true, true, 0, true);
		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Chasing Player");
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
