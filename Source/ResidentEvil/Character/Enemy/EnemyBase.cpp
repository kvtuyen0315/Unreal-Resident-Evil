// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//UE_LOG(LOGTEMP, Warning, TEXT("EnemyBase Constructor Called"));
}

AEnemyBase::AEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	CharacterTarget = UGameplayStatics::GetPlayerCharacter(this, 0);
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

