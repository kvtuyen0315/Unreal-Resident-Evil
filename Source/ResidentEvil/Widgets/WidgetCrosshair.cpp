// Fill out your copyright notice in the Description page of Project Settings.

#include "WidgetCrosshair.h"
#include "Character/Hero/HeroBase.h"
#include "CanvasPanelSlot.h"
#include "Border.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameConstValue.h"

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

		Hero->OnMoving.RemoveDynamic(this, &UWidgetCrosshair::OnPlayerMoving);
		Hero->OnMoving.AddDynamic(this, &UWidgetCrosshair::OnPlayerMoving);
	}
	SetVisibility(ESlateVisibility::Hidden);

	LeftSlot = Cast<UCanvasPanelSlot>(Left->Slot);
	RightSlot = Cast<UCanvasPanelSlot>(Right->Slot);
	TopSlot = Cast<UCanvasPanelSlot>(Top->Slot);
	BottomSlot = Cast<UCanvasPanelSlot>(Bottom->Slot);

	CurrentSpread = Spread;
}

void UWidgetCrosshair::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	
	if (IsVisible())
	{
		CurrentSpread = UKismetMathLibrary::FInterpTo(CurrentSpread, Spread, InDeltaTime, ReduceRadiusTime);
		UE_LOG(LogTemp, Warning, TEXT("Current Spread Value = %f"), CurrentSpread);

		FVector2D Position;
		// Left
		LeftSlot->SetSize(FVector2D(Lenght, Thickness));
		Position.X = -Lenght - CurrentSpread;
		Position.Y = -(Thickness / 2.f);
		LeftSlot->SetPosition(Position);

		// Right
		RightSlot->SetSize(FVector2D(Lenght, Thickness));
		Position.X = CurrentSpread;
		Position.Y = -(Thickness / 2.f);
		RightSlot->SetPosition(Position);

		// Top
		TopSlot->SetSize(FVector2D(Thickness, Lenght));
		Position.X = -(Thickness / 2.f);
		Position.Y = -Lenght - CurrentSpread;
		TopSlot->SetPosition(Position);

		// Bottom
		BottomSlot->SetSize(FVector2D(Thickness, Lenght));
		Position.X = -(Thickness / 2.f);
		Position.Y = CurrentSpread;
		BottomSlot->SetPosition(Position);
	}
}

void UWidgetCrosshair::OnPlayerPressAim()
{
	SetVisibility(ESlateVisibility::Visible);
	CurrentSpread = MaxRadius;
}

void UWidgetCrosshair::OnPlayerReleaseAim()
{
	SetVisibility(ESlateVisibility::Hidden);
}

void UWidgetCrosshair::OnPlayerMoving()
{
	CurrentSpread = MaxRadius;
}
