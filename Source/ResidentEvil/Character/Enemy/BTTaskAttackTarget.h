// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTaskAttackTarget.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTTaskAttackTarget : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTTaskAttackTarget(const FObjectInitializer& ObjectInitializer);
	virtual void TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds) override;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
