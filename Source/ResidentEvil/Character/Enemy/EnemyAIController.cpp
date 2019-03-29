// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "EnemyBase.h"

#define KEY_ID_TARGET "Target"
#define KEY_ID_TARGET_SIGHT_INFO "TargetInSightInfo"

AEnemyAIController::AEnemyAIController()
{
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
}

void AEnemyAIController::Possess(APawn* AIPawn)
{
	Super::Possess(AIPawn);

	EnemyPawn = Cast<AEnemyBase>(AIPawn);

	if (EnemyPawn && EnemyPawn->GetAIBehaviorTree())
	{
		BlackboardComp->InitializeBlackboard(*EnemyPawn->GetAIBehaviorTree()->BlackboardAsset);

		EnemyKeyID = BlackboardComp->GetKeyID(KEY_ID_TARGET);
		TargetInSightInfoID = BlackboardComp->GetKeyID(KEY_ID_TARGET_SIGHT_INFO);

		BehaviorComp->StartTree(*EnemyPawn->GetAIBehaviorTree());
	}
}