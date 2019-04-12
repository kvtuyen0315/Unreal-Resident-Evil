// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetCrosshair.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UWidgetCrosshair : public UUserWidget
{
	GENERATED_BODY()

public:
	UWidgetCrosshair(const FObjectInitializer& ObjectInitializer);
	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	// Delegate called when player press aim
	UFUNCTION()
	void OnPlayerPressAim();

	// Delegate called when player release aim
	UFUNCTION()
	void OnPlayerReleaseAim();

	// Delegate called when player moving
	UFUNCTION()
	void OnPlayerMoving();

protected:
	UPROPERTY(meta = (BindWidget))
	class UBorder* Bottom;

	UPROPERTY(meta = (BindWidget))
	UBorder* Right;

	UPROPERTY(meta = (BindWidget))
	UBorder* Left;

	UPROPERTY(meta = (BindWidget))
	UBorder* Top;

	// Caching 4 slot
	UPROPERTY()
	class UCanvasPanelSlot* LeftSlot;

	UPROPERTY()
	UCanvasPanelSlot* RightSlot;

	UPROPERTY()
	UCanvasPanelSlot* TopSlot;

	UPROPERTY()
	UCanvasPanelSlot* BottomSlot;


	// Base values, set by default
	// Spread, The higher the value, the higher the radius of crosshair
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Spread = 10.f;

	// Thickness, affect to each part of crosshair
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Thickness = 4.f;

	// Lenght, affect to each part of crosshair
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lenght = 30.f;

	// The radius of crosshair will change when perform specific actions
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRadius = 50.f;

	// The time takes to fully "focus"
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeReduceRadius = 1.f;

	// The exponent use in formula
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Exponent = 2.f;

	// The Color of Crosshair
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor CrosshairColor = FColor::White;

	// Dynamic 
	UPROPERTY()
	float CurrentSpread;

	UPROPERTY()
	float CurrentTime;
};
