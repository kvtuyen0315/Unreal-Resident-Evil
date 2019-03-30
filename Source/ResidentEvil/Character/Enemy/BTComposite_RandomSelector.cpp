// Fill out your copyright notice in the Description page of Project Settings.

#include "BTComposite_RandomSelector.h"
#include "UnrealMathUtility.h"

UBTComposite_RandomSelector::UBTComposite_RandomSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "Random Selector";
	bIsInitialArrayChildIndex = false;
	bIsEqualChance = true;
	OnNextChild.BindUObject(this, &UBTComposite_RandomSelector::GetNextChildHandler);
	NextChildIdx = BTSpecialChild::ReturnToParent;
}

int32 UBTComposite_RandomSelector::GetNextChildHandler(FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult)
{
	// success = quit
	NextChildIdx = BTSpecialChild::ReturnToParent;

	if (PrevChild == BTSpecialChild::NotInitialized)
	{
		// reset before fill in
		ArrayChildIndex.Reset();
		// fill in temp array child index and use it to get next child
		for (int32 i = 0; i < Children.Num(); i++)
		{
			ArrayChildIndex.Add(i);
		}
		// reset before fill in
		MapChildChanceTemp.Reset();
		// Init temp array child chance
		for (int32 i = 0; i < ArrayChildIndex.Num(); i++)
		{
			int32 ChildIndex = ArrayChildIndex[i];
			MapChildChanceTemp.Add(ChildIndex, ArrayChance[i]);
		}
		// newly activated
		NextChildIdx = RandomNextChildIndex();
	}
	else if (LastResult == EBTNodeResult::Failed)
	{
		// failed = choose next child
		NextChildIdx = RandomNextChildIndex();
	}

	return NextChildIdx;
}

int32 UBTComposite_RandomSelector::RandomNextChildIndex()
{
	int32 RandomResult = BTSpecialChild::ReturnToParent;
	if (bIsEqualChance)
	{
		// Random with equal chance
		int32 Min = 0;
		int32 Max = ArrayChildIndex.Num() - 1;
		int32 RandomIndex = FMath::RandRange(Min, Max);
		if (ArrayChildIndex.Num() > RandomIndex)
		{
			RandomResult = ArrayChildIndex[RandomIndex];
			// remove after random
			ArrayChildIndex.RemoveAt(RandomIndex);
		}
	}
	else
	{
		// Random that has weight, percentage

		// check if only 1 index left
		if (ArrayChildIndex.Num() == 1)
		{
			RandomResult = ArrayChildIndex[0];
			// remove after random
			ArrayChildIndex.RemoveAt(0);
		}
		else
		{
			float RandomNumber = FMath::FRandRange(0.f, 100.f);
			for (int32 i = 0; i < ArrayChildIndex.Num(); i++)
			{
				int32 ChildIndex = ArrayChildIndex[i];
				// get the percent of this child index
				float TempChance = MapChildChanceTemp[ChildIndex];
				if (RandomNumber < TempChance)
				{
					RandomResult = ArrayChildIndex[i];
					// remove after random
					ArrayChildIndex.RemoveAt(i);
					// Update the percent of array
					float AveragePercentIncrease = TempChance / ArrayChildIndex.Num();
					for (int32 j = 0; j < ArrayChildIndex.Num(); j++)
					{
						int32 TempChildIndex = ArrayChildIndex[j];
						MapChildChanceTemp[TempChildIndex] += AveragePercentIncrease;
					}
					break;
				}
				else
				{
					RandomNumber -= TempChance;
				}
			}
		}
	}

	return RandomResult;
}

#if WITH_EDITOR

FName UBTComposite_RandomSelector::GetNodeIconName() const
{
	return FName("BTEditor.Graph.BTNode.Composite.Selector.Icon");
}

#endif



