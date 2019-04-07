// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTaskRotate.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTTaskRotate : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	

public:
	UBTTaskRotate(const FObjectInitializer& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds) override;
protected:
	// The Min X-axis Offset Direction you want actor rotate to
	UPROPERTY(EditAnywhere)
	float MinOffsetX;

	// The Max X-axis Offset Direction you want actor rotate to
	UPROPERTY(EditAnywhere)
	float MaxOffsetX;

	// The Min Y-axis Offset Direction you want actor rotate to
	UPROPERTY(EditAnywhere)
	float MinOffsetY;

	// The Min Y-axis Offset Direction you want actor rotate to
	UPROPERTY(EditAnywhere)
	float MaxOffsetY;

	UPROPERTY(EditAnywhere)
	float MinTimeRotate;

	UPROPERTY(EditAnywhere)
	float MaxTimeRotate;

	// The time need to rotate in second
	UPROPERTY()
	float TimeRotate;

	// The Destination Rotation
	FRotator DesRotation;

	// Ref of Actor to be rotated
	AActor* Actor;

	// Time do this action
	float ElapseTime;
};
