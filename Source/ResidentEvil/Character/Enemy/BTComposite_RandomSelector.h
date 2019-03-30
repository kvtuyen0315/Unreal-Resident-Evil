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
	int32 GetNextChildIndex();

	UPROPERTY()
	bool bIsInitialArrayChildIndex;
};
