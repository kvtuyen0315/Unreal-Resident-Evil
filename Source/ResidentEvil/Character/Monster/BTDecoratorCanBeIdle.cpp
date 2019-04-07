// Fill out your copyright notice in the Description page of Project Settings.

#include "BTDecoratorCanBeIdle.h"
#include "MonsterAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "TargetInSightInfo.h"
#include "TargetHearingInfo.h"
#include "Engine.h"

UBTDecoratorCanBeIdle::UBTDecoratorCanBeIdle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bNotifyBecomeRelevant = true;
	bAllowAbortChildNodes = true;
	bAllowAbortLowerPri = true;
	bNotifyTick = true;
	FlowAbortMode = EBTFlowAbortMode::Self;
}

bool UBTDecoratorCanBeIdle::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	if (SightInfo && HearingInfo)
	{
		if (SightInfo->IsTargetInSight() || HearingInfo->IsHearingTargetSound())
		{
			return false;
		}
	}

	return true;
}

void UBTDecoratorCanBeIdle::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AIController == nullptr && SightInfo == nullptr && HearingInfo == nullptr)
	{
		AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
		SightInfo = Cast<UTargetInSightInfo>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetTargetInSightInfoID()));
		HearingInfo = Cast<UTargetHearingInfo>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(AIController->GetHearingTargetInfoID()));
	}
}

void UBTDecoratorCanBeIdle::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if (SightInfo && HearingInfo)
	{
		if (SightInfo->IsTargetInSight() || HearingInfo->IsHearingTargetSound())
		{
			OwnerComp.RequestExecution(this);
			GEngine->AddOnScreenDebugMessage(-3, 2.f, FColor::Red, TEXT("BTDecoratorCanBeIdle Execution"), true);
		}
	}
}


