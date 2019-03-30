// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BTComposite_RandomSelector.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTComposite_RandomSelector : public UBTCompositeNode
{
	GENERATED_UCLASS_BODY()
	
	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult);

#if WITH_EDITOR
	virtual FName GetNodeIconName() const override;
#endif

public:
	// if you want to have 3 tasks that have 50%, 20%, 30% each, you should set 50, 20, 30
	// The chance of each element order is from left to right
	UPROPERTY(EditAnywhere)
	TArray<float> ArrayChance;

	//
	UPROPERTY()
	TArray<int32> ArrayChildIndex;
	// if true, all child have equal chance to activate
	UPROPERTY(EditAnywhere)
	bool bIsEqualChance;
protected:
	UFUNCTION()
	int32 RandomNextChildIndex();
	UPROPERTY()
	bool bIsInitialArrayChildIndex;
	UPROPERTY()
	int32 NextChildIdx;
	// The temp array that used to calculate percentage
	UPROPERTY()
	TMap<int32, float> MapChildChanceTemp;
};
