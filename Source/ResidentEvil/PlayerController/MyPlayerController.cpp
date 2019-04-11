// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/GameUserWidget.h"
#include "ConstructorHelpers.h"

AMyPlayerController::AMyPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<UUserWidget> Asset(TEXT("/Game/MyBlueprints/WidgetCrosshair"));
	if (Asset.Succeeded())
	{
		WidgetRef = Asset.Class;
	}
}


void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (WidgetRef)
	{
		Widget = CreateWidget<UUserWidget>(this, WidgetRef);
		//FInputModeGameAndUI Mode;
		//Mode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		//Mode.SetHideCursorDuringCapture(false);
		//SetInputMode(Mode);
		Widget->AddToViewport(); // Z-order, this just makes it render on the very top.
	}
}


