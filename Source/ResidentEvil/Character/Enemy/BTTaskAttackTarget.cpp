// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskAttackTarget.h"
#include "EnemyAIController.h"
#include "TargetHearingInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "GameConstValue.h"
#include "EnemyBase.h"

UBTTaskAttackTarget::UBTTaskAttackTarget(const FObjectInitializer& ObjectInitializer)
{

}

void UBTTaskAttackTarget::TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
}

EBTNodeResult::Type UBTTaskAttackTarget::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AEnemyAIController* AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	ACharacter* Target = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetEnemyKeyID()));
	if (AIController && Target)
	{
		AIController->AttackTarget(Target);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
