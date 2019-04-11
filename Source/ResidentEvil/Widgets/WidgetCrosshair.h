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

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
		
	// Delegate called when player press aim
	UFUNCTION()
	void OnPlayerPressAim();

	// Delegate called when player release aim
	UFUNCTION()
	void OnPlayerReleaseAim();

protected:
	UPROPERTY(meta = (BindWidget))
	class UBorder* Bottom;

	UPROPERTY(meta = (BindWidget))
	UBorder* Right;

	UPROPERTY(meta = (BindWidget))
	UBorder* Left;

	UPROPERTY(meta = (BindWidget))
	UBorder* Top;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Spread;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Thickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lenght;
};
