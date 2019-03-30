// Fill out your copyright notice in the Description page of Project Settings.

#include "BTComposite_RandomSelector.h"
#include "UnrealMathUtility.h"

UBTComposite_RandomSelector::UBTComposite_RandomSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Random Selector";
	bIsInitialArrayChildIndex = false;
	OnNextChild.BindUObject(this, &UBTComposite_RandomSelector::GetNextChildHandler);
}

int32 UBTComposite_RandomSelector::GetNextChildHandler(FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult)
{
	if (bIsInitialArrayChildIndex == false)
	{
		bIsInitialArrayChildIndex = true;
		for (int32 i = 0; i < Children.Num(); i++)
		{
			ArrayChildIndex.Add(i);
		}
	}
	// success = quit
	int32 NextChildIdx = BTSpecialChild::ReturnToParent;

	if (PrevChild == BTSpecialChild::NotInitialized)
	{
		// newly activated: start from first
		NextChildIdx = GetNextChildIndex();
	}
	else if (LastResult == EBTNodeResult::Failed)
	{
		// failed = choose next child
		ArrayChildIndex.RemoveAt(PrevChild);
		NextChildIdx = PrevChild + 1;
	}

	return NextChildIdx;
}

int32 UBTComposite_RandomSelector::GetNextChildIndex()
{
	int32 RandomResult = 0;
	if (bIsEqualChance)
	{
		int32 Min = 0;
		int32 Max = ArrayChildIndex.Num() - 1;
		RandomResult = FMath::RandRange(Min, Max);
	}

	return RandomResult;
}

#if WITH_EDITOR

FName UBTComposite_RandomSelector::GetNodeIconName() const
{
	return FName("BTEditor.Graph.BTNode.Composite.Selector.Icon");
}

#endif



