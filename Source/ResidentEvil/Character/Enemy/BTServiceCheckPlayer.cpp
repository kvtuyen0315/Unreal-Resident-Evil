// Fill out your copyright notice in the Description page of Project Settings.

#include "BTServiceCheckPlayer.h"
#include "EnemyAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "Engine.h"

UBTServiceCheckPlayer::UBTServiceCheckPlayer()
{
	this->bCreateNodeInstance = true;
}

void UBTServiceCheckPlayer::OnGameplayTaskActivated(UGameplayTask& Task)
{
	UE_LOG(LogTemp, Warning, TEXT("UBTServiceCheckPlayer OnGameplayTaskActivated"));
}

void UBTServiceCheckPlayer::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
	UE_LOG(LogTemp, Warning, TEXT("UBTServiceCheckPlayer OnGameplayTaskDeactivated"));
}

void UBTServiceCheckPlayer::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	AEnemyAIController* EnemyPC = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());

	if (EnemyPC)
	{
		ACharacter* Enemy = Cast<ACharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());

		if (Enemy)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(EnemyPC->GetEnemyKeyID(), Enemy);
			//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "Enemy Is here");
		}
	}
}




