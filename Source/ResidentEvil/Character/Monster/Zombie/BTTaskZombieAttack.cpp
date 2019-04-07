// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskZombieAttack.h"
#include "Character/Monster/MonsterAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "GameConstValue.h"
#include "Character/Monster/MonsterBase.h"
#include "Character/Monster/MonsterAttackPattern.h"

UBTTaskZombieAttack::UBTTaskZombieAttack(const FObjectInitializer& ObjectInitializer)
{
	this->bNotifyTick = true;
}

void UBTTaskZombieAttack::TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	if (MonsterPawn->IsAttacking() == false)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}

EBTNodeResult::Type UBTTaskZombieAttack::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	MonsterPawn = AIController->GetMonsterPawn();
	Character = Cast<ACharacter>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetTargetKeyID()));
	if (Character && MonsterPawn)
	{
		float Distance = FVector::Distance(Character->GetActorLocation(), MonsterPawn->GetActorLocation());
		const TArray<UMonsterAttackPattern*>& ArrayAttack = UMonsterAttackPattern::GetMonsterAttackPatternArray(MonsterPawn->GetMonsterType());
		for (int32 i = 0; i < ArrayAttack.Num(); i++)
		{
			UMonsterAttackPattern* AttackPattern = ArrayAttack[i];
			const float AttackRange = AttackPattern->GetAttackRange();
			if (Distance <= AttackRange)
			{
				AIController->AttackTarget(Character, AttackPattern);
				return EBTNodeResult::InProgress;
			}
		}
	}
	return EBTNodeResult::Failed;
}


