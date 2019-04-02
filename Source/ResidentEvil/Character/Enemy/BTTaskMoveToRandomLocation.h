// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTaskMoveToRandomLocation.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTTaskMoveToRandomLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UBTTaskMoveToRandomLocation(const FObjectInitializer& ObjectInitializer);
	virtual void TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds) override;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	// Dont set negative value
	UPROPERTY(EditAnywhere)
	float MinRadiusX;

	// Dont set negative value
	UPROPERTY(EditAnywhere)
	float MaxRadiusX;

	// Dont set negative value
	UPROPERTY(EditAnywhere)
	float MinRadiusY;

	// Dont set negative value
	UPROPERTY(EditAnywhere)
	float MaxRadiusY;

	// To check if player move close enough to finish task
	UPROPERTY(VisibleAnywhere)
	float AcceptanceRadius;
protected:
	UPROPERTY(VisibleAnywhere)
	class AActor* Actor;

	UPROPERTY(VisibleAnywhere)
	FVector DesinationLocation;

	// For some reason we cannot call FinishTaskLatent in onhit event
	UPROPERTY(VisibleAnywhere)
	bool bFailAtNextTick;

	UFUNCTION()
	virtual void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	class AEnemyAIController* AIController;
};
