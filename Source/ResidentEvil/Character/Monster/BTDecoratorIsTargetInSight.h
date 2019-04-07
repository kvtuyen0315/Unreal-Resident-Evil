// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecoratorIsTargetInSight.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTDecoratorIsTargetInSight : public UBTDecorator
{
	GENERATED_BODY()
public:
	UBTDecoratorIsTargetInSight(const FObjectInitializer& ObjectInitializer);
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	// Caching
	UPROPERTY()
	class AMonsterAIController* AIController;

	UPROPERTY()
	class UTargetInSightInfo* SightInfo;
};
