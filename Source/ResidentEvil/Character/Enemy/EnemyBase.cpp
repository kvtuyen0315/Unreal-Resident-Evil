// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyBase.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyAIController.h"
#include "Perception/AIPerceptionComponent.h"

// Sets default values
AEnemyBase::AEnemyBase()
{

}

AEnemyBase::AEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set Default AI Controller Class. You can custom it by inherit AEnemyAIController Class
	this->AIControllerClass = AEnemyAIController::StaticClass();
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	CharacterTarget = UGameplayStatics::GetPlayerCharacter(this, 0);
}

void AEnemyBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

