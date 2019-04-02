// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecoratorCanBeIdle.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTDecoratorCanBeIdle : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	UBTDecoratorCanBeIdle(const FObjectInitializer& ObjectInitializer);
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	// Caching
	UPROPERTY()
	class AEnemyAIController* AIController;

	UPROPERTY()
	class UTargetInSightInfo* SightInfo;
	
	UPROPERTY()
	class UTargetHearingInfo* HearingInfo;
};
