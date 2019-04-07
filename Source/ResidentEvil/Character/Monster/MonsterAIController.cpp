// Fill out your copyright notice in the Description page of Project Settings.

#include "MonsterAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "MonsterBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MonsterAttackPattern.h"
#include "Structures/GameEnumName.h"

#define KEY_ID_TARGET "Target"
#define KEY_ID_TARGET_SIGHT_INFO "TargetInSightInfo"
#define KEY_ID_HEARING_TARGET_INFO "HearingTargetInfo"

AMonsterAIController::AMonsterAIController()
{
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
}

void AMonsterAIController::Possess(APawn* AIPawn)
{
	Super::Possess(AIPawn);

	MonsterPawn = Cast<AMonsterBase>(AIPawn);

	if (MonsterPawn && MonsterPawn->GetAIBehaviorTree())
	{
		BlackboardComp->InitializeBlackboard(*MonsterPawn->GetAIBehaviorTree()->BlackboardAsset);

		TargetKeyID = BlackboardComp->GetKeyID(KEY_ID_TARGET);
		TargetInSightInfoID = BlackboardComp->GetKeyID(KEY_ID_TARGET_SIGHT_INFO);
		HearingTargetInfoID = BlackboardComp->GetKeyID(KEY_ID_HEARING_TARGET_INFO);

		BehaviorComp->StartTree(*MonsterPawn->GetAIBehaviorTree());
	}
}

void AMonsterAIController::AttackTarget(AActor * Target, UMonsterAttackPattern* AttackPattern)
{
	EMonsterAttackResult Result = MonsterPawn->AttackTarget(Target, AttackPattern);
	if (Result == EMonsterAttackResult::SUCCEED)
	{

	}
}
