// Fill out your copyright notice in the Description page of Project Settings.

#include "GameUserWidget.h"
#include "Button.h"
#include "WidgetTree.h"
#include "CanvasPanel.h"
#include "CanvasPanelSlot.h"
#include "TextBlock.h"

void UGameUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BtnStart->OnClicked.AddDynamic(this, &UGameUserWidget::OnClickBtn);
}

TSharedRef<SWidget> UGameUserWidget::RebuildWidget()
{
	//UPanelWidget* RootWidget = Cast<UPanelWidget>(GetRootWidget());
	//if (!RootWidget)
	//{
	//	RootWidget = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("RootWidget"));
	//	UCanvasPanelSlot* RootWidgetSlot = Cast<UCanvasPanelSlot>(RootWidget->Slot);
	//	if (RootWidgetSlot)
	//	{
	//		RootWidgetSlot->SetAnchors(FAnchors(0.f, 0.f, 1.f, 1.f));
	//		RootWidgetSlot->SetOffsets(FMargin(0.f, 0.f));
	//	}
	//	WidgetTree->RootWidget = RootWidget;
	//}
	TSharedRef<SWidget> Widget = Super::RebuildWidget();

	//if (RootWidget && WidgetTree)
	//{
	//	UTextBlock* TextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("TEXTBOX"));
	//	RootWidget->AddChild(TextBlock);
	//	TextBlock->SetText(FText::FromString("One thing I want to test"));
	//}


	return Widget;
}

void UGameUserWidget::OnClickBtn()
{
	UE_LOG(LogTemp, Warning, TEXT("Click Btn"));
}
