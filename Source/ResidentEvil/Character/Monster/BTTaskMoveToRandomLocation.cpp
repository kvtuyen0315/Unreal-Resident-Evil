// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskMoveToRandomLocation.h"
#include "MonsterAIController.h"
#include "TargetHearingInfo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"

UBTTaskMoveToRandomLocation::UBTTaskMoveToRandomLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	AcceptanceRadius = 10.f;
	bNotifyTick = true;
	bFailAtNextTick = false;
}

void UBTTaskMoveToRandomLocation::TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	if (bFailAtNextTick)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}
	else
	{
		if (AIController)
		{
			EPathFollowingStatus::Type Status = AIController->GetMoveStatus();
			if (Status != EPathFollowingStatus::Moving)
			{
				FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
			}
		}
	}
}

EBTNodeResult::Type UBTTaskMoveToRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	float RandomX = FMath::FRandRange(MinRadiusX, MaxRadiusX);
	float RandomY = FMath::FRandRange(MinRadiusY, MaxRadiusY);
	// Random Sign radius
	int32 RandomSignX = FMath::RandRange(0, 1);
	int32 RandomSignY = FMath::RandRange(0, 1);
	RandomX = RandomSignX == 0 ? RandomX * -1 : RandomX;
	RandomY = RandomSignY == 0 ? RandomY * -1 : RandomY;
	//
	Actor = AIController->GetCharacter();
	FVector MyLoc = Actor->GetActorLocation();
	DesinationLocation = MyLoc + FVector(RandomX, RandomY, 0.f);
	EPathFollowingRequestResult::Type Result = AIController->MoveToLocation(DesinationLocation, AcceptanceRadius);
	if (Result == EPathFollowingRequestResult::RequestSuccessful)
	{
		AIController->OnActorHit.Clear();
		AIController->OnActorHit.AddDynamic(this, &UBTTaskMoveToRandomLocation::OnHit);
		return EBTNodeResult::InProgress;
	}
	return EBTNodeResult::Failed;
}

void UBTTaskMoveToRandomLocation::OnHit(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit)
{
	// dont' care anything, just failed
	bFailAtNextTick = true;
}


