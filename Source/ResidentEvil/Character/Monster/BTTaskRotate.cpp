// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTaskRotate.h"
#include "GameFramework/Character.h"
#include "Engine.h"
#include "MonsterAIController.h"

UBTTaskRotate::UBTTaskRotate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bNotifyTick = true;
	ElapseTime = 0.f;
}

EBTNodeResult::Type UBTTaskRotate::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AMonsterAIController* AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());
	Actor = AIController->GetCharacter();
	FVector MyLoc = Actor->GetActorLocation();
	float RandomX = FMath::FRandRange(MinOffsetX, MaxOffsetX);
	float RandomY = FMath::FRandRange(MinOffsetY, MaxOffsetY);
	TimeRotate = FMath::FRandRange(MinTimeRotate, MaxTimeRotate);
	FVector TargetLoc = MyLoc + FVector(RandomX, RandomY, 0.f);
	FVector Dir = (TargetLoc - MyLoc);
	Dir.Normalize();
	DesRotation = Dir.Rotation();

	return EBTNodeResult::InProgress;
}

void UBTTaskRotate::TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Actor->SetActorRotation(FMath::Lerp(Actor->GetActorRotation(), DesRotation, DeltaSeconds / TimeRotate));
	ElapseTime += DeltaSeconds;
	if (ElapseTime > TimeRotate)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
