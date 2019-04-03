// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskIsEnoughRangeToAttack.h"
#include "EnemyAIController.h"
#include "TargetHearingInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "GameConstValue.h"
#include "EnemyBase.h"

EBTNodeResult::Type UBTTaskIsEnoughRangeToAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyAIController* AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	AEnemyBase* EnemyPawn = AIController->GetEnemyPawn();
	ACharacter* Character = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetEnemyKeyID()));
	if (Character)
	{
		float Distance = FVector::Distance(Character->GetActorLocation(), EnemyPawn->GetActorLocation());
		if (Distance < EnemyPawn->GetAttackRange())
		{
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}




