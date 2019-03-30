// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTServiceRandomSelector.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTServiceRandomSelector : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UBTServiceRandomSelector();

	/** Notify called after GameplayTask changes state to Active (initial activation or resuming) */
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;

	/** Notify called after GameplayTask changes state from Active (finishing or pausing) */
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

};
