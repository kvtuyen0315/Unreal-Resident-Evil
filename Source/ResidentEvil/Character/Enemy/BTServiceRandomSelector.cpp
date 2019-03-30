// Fill out your copyright notice in the Description page of Project Settings.

#include "BTServiceRandomSelector.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "Engine.h"
#include "EnemyBase.h"
#include "TargetInSightInfo.h"
#include "TargetHearingInfo.h"

UBTServiceRandomSelector::UBTServiceRandomSelector()
{
	this->bCreateNodeInstance = true;
}

void UBTServiceRandomSelector::OnGameplayTaskActivated(UGameplayTask& Task)
{
	UE_LOG(LogTemp, Warning, TEXT("UBTServiceRandomSelector OnGameplayTaskActivated"));
}

void UBTServiceRandomSelector::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
	UE_LOG(LogTemp, Warning, TEXT("UBTServiceRandomSelector OnGameplayTaskDeactivated"));
}

void UBTServiceRandomSelector::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	AEnemyAIController* AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
}



