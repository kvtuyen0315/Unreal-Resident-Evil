// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Button.h"
#include "GameUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API UGameUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	UPanelWidget* MyPanel;

	UPROPERTY(meta = (BindWidget))
	UButton* BtnStart;

	virtual TSharedRef<SWidget> RebuildWidget() override;

	UFUNCTION()
	void OnClickBtn();
};
