// Fill out your copyright notice in the Description page of Project Settings.

#include "WidgetCrosshair.h"
#include "Character/Hero/HeroBase.h"
#include "CanvasPanelSlot.h"
#include "Border.h"

UWidgetCrosshair::UWidgetCrosshair(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UWidgetCrosshair::NativeConstruct()
{
	Super::NativeConstruct();
	AHeroBase* Hero = Cast<AHeroBase>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	if (Hero)
	{
		Hero->OnPressAim.RemoveDynamic(this, &UWidgetCrosshair::OnPlayerPressAim);
		Hero->OnPressAim.AddDynamic(this, &UWidgetCrosshair::OnPlayerPressAim);

		Hero->OnReleaseAim.RemoveDynamic(this, &UWidgetCrosshair::OnPlayerReleaseAim);
		Hero->OnReleaseAim.AddDynamic(this, &UWidgetCrosshair::OnPlayerReleaseAim);
	}
	SetVisibility(ESlateVisibility::Hidden);
}

void UWidgetCrosshair::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	// Left
	FVector2D Size = FVector2D(Lenght, Thickness);
	FVector2D Position;
	UCanvasPanelSlot* LeftSlot = Cast<UCanvasPanelSlot>(Left->Slot);
	UCanvasPanelSlot* RightSlot = Cast<UCanvasPanelSlot>(Right->Slot);
	UCanvasPanelSlot* TopSlot = Cast<UCanvasPanelSlot>(Top->Slot);
	UCanvasPanelSlot* BottomSlot = Cast<UCanvasPanelSlot>(Bottom->Slot);
	LeftSlot->SetSize(Size);
	Position.X = -Lenght - Spread;
	Position.Y = -(Thickness / 2.f);
	LeftSlot->SetPosition(Position);

	// Right
	RightSlot->SetSize(Size);
	Position.X = Spread;
	Position.Y = -(Thickness / 2.f);
	RightSlot->SetPosition(Position);

	Size = FVector2D(Thickness, Lenght);
	// Top
	TopSlot->SetSize(Size);
	Position.X = -(Thickness / 2.f);
	Position.Y = -Lenght - Spread;
	TopSlot->SetPosition(Position);

	// Bottom
	BottomSlot->SetSize(Size);
	Position.X = -(Thickness / 2.f);
	Position.Y = Spread;
	BottomSlot->SetPosition(Position);
}

void UWidgetCrosshair::OnPlayerPressAim()
{
	UE_LOG(LogTemp, Warning, TEXT("On Player Press Aim"));
	SetVisibility(ESlateVisibility::Visible);
}

void UWidgetCrosshair::OnPlayerReleaseAim()
{
	UE_LOG(LogTemp, Warning, TEXT("On Player Release Aim"));
	SetVisibility(ESlateVisibility::Hidden);
}
