// Fill out your copyright notice in the Description page of Project Settings.

#include "BTDecoratorIsTargetInSight.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "TargetInSightInfo.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"

UBTDecoratorIsTargetInSight::UBTDecoratorIsTargetInSight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bNotifyBecomeRelevant = true;
	bAllowAbortLowerPri = true;
	FlowAbortMode = EBTFlowAbortMode::LowerPriority;
}

bool UBTDecoratorIsTargetInSight::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	if (SightInfo && SightInfo->IsTargetInSight())
	{
		return true;
	}

	return false;
}

void UBTDecoratorIsTargetInSight::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AIController == nullptr && SightInfo == nullptr)
	{
		AIController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
		SightInfo = Cast<UTargetInSightInfo>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetTargetInSightInfoID()));
	}
}


