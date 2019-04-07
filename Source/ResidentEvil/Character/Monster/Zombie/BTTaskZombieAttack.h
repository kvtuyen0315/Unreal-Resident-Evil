// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTaskZombieAttack.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UBTTaskZombieAttack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UBTTaskZombieAttack(const FObjectInitializer& ObjectInitializer);
	virtual void TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds) override;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
protected:
	UPROPERTY()
	class AMonsterAIController* AIController;
	UPROPERTY()
	class AMonsterBase* MonsterPawn;
	UPROPERTY()
	class ACharacter* Character;
};
