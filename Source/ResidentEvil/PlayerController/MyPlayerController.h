// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RESIDENTEVIL_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
		
public:
	AMyPlayerController(const FObjectInitializer& ObjectInitializer);
	
	// Override BeginPlay()
	virtual void BeginPlay() override;
	
protected:
	//class UGameUserWidget* WidgetRef;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ref Widget")
	TSubclassOf<class UUserWidget> WidgetRef;
	UPROPERTY()
		UUserWidget* Widget;
};
