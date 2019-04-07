// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskIsEnoughRangeToAttack.h"
#include "MonsterAIController.h"
#include "TargetHearingInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "GameConstValue.h"
#include "MonsterBase.h"
#include "Structures/GameEnumName.h"
#include "MonsterAttackPattern.h"

EBTNodeResult::Type UBTTaskIsEnoughRangeToAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AMonsterAIController* AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	AMonsterBase* MonsterPawn = AIController->GetMonsterPawn();
	ACharacter* Character = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetTargetKeyID()));
	if (Character)
	{
		float Distance = FVector::Distance(Character->GetActorLocation(), MonsterPawn->GetActorLocation());
		const TArray<UMonsterAttackPattern*>& ArrayAttack = UMonsterAttackPattern::GetMonsterAttackPatternArray(MonsterPawn->GetMonsterType());
		for (int32 i = 0; i < ArrayAttack.Num(); i++)
		{
			const UMonsterAttackPattern* AttackPattern = ArrayAttack[i];
			const float AttackRange = AttackPattern->GetAttackRange();
			if (Distance <= AttackRange)
			{
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}




