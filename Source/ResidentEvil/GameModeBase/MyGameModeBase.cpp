﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "ResidentEvil/Character/Hero/Hunk.h"
#include "UObject/ConstructorHelpers.h"
#include "Character/Monster/Zombie/Zombie.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Character/Monster/MonsterAttackPattern.h"
#include "Widgets/GameUserWidget.h"
#include "PlayerController/MyPlayerController.h"

// Tuyển.
#pragma region Create.
AMyGameModeBase::AMyGameModeBase()
{
	static ConstructorHelpers::FClassFinder<AHunk> hunk(TEXT("/Script/ResidentEvil.Hunk"));
	this->DefaultPawnClass = hunk.Class;

	this->PlayerControllerClass = AMyPlayerController::StaticClass();
}
#pragma endregion

void AMyGameModeBase::StartPlay()
{
	Super::StartPlay();
	// Init game data 
	UMonsterAttackPattern::Initialize();

	UWorld* World = this->GetWorld();
	for (int32 i = 0; i < 1; i++)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.Owner = this;
		SpawnInfo.Instigator = Instigator;
		FVector Location = FVector(100.f * (i + 1), 0.f, 100.f);
		AZombie* Obj = World->SpawnActor<AZombie>(AZombie::StaticClass(), Location, FRotator::ZeroRotator, SpawnInfo);
	}

}