// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskIsEnoughRangeToAttack.h"
#include "MonsterAIController.h"
#include "TargetHearingInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "GameConstValue.h"
#include "MonsterBase.h"

EBTNodeResult::Type UBTTaskIsEnoughRangeToAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AMonsterAIController* AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	AMonsterBase* MonsterPawn = AIController->GetMonsterPawn();
	ACharacter* Character = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetTargetKeyID()));
	if (Character)
	{
		float Distance = FVector::Distance(Character->GetActorLocation(), MonsterPawn->GetActorLocation());
		if (Distance < MonsterPawn->GetAttackRange()) // temp
		{
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}




