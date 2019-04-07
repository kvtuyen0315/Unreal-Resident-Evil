// Fill out your copyright notice in the Description page of Project Settings.

#include "BTServiceCheckPlayer.h"
#include "MonsterAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "GameFramework/Character.h"
#include "Engine.h"
#include "MonsterBase.h"
#include "TargetInSightInfo.h"
#include "TargetHearingInfo.h"

UBTServiceCheckPlayer::UBTServiceCheckPlayer()
{
	//this->bCreateNodeInstance = true;
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
	AMonsterAIController* AIController = Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (AIController)
	{
		ACharacter* Target = Cast<ACharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
		
		if (Target)
		{
			UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
			BlackboardComponent->SetValue<UBlackboardKeyType_Object>(AIController->GetTargetKeyID(), Target);
			BlackboardComponent->SetValue<UBlackboardKeyType_Object>(AIController->GetTargetInSightInfoID(), AIController->GetMonsterPawn()->GetTargetInSightInfo());
			BlackboardComponent->SetValue<UBlackboardKeyType_Object>(AIController->GetHearingTargetInfoID(), AIController->GetMonsterPawn()->GetTargetHearingInfo());
		}
	}
}




