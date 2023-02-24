// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetGage.h"
#include "MyCharacter.h"
#include "Components/ProgressBar.h"
#include "Components/Button.h"




void UWidgetGage::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	//Button_Test->OnClicked.AddDynamic(this, &UWidgetGage::OnClickButton_Test);
}

void UWidgetGage::OnClickButton_Test()
{
	UE_LOG(LogTemp, Error, TEXT("TEST@@@@@@@@@@@@@@@@"));
}

void UWidgetGage::BindThrowingPowerGageWidget(AMyCharacter* Ptr_MyCharacter)
{
	if (nullptr == Ptr_MyCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("Ptr_MyCharacter is null."));
		return;
	}

	Ptr_CurrentCharacter = Ptr_MyCharacter;
	Ptr_MyCharacter->OnThrowingPowerChangedDelegate.AddUObject(this, &UWidgetGage::UpdateProgressBar);
	UpdateProgressBar();
}

void UWidgetGage::UpdateProgressBar()
{
	if (nullptr == PB_ThrowingPowerGage)
	{
		UE_LOG(LogTemp, Error, TEXT("PB_ThrowingPowerGage is null."));
		return;
	}

	if (nullptr == Ptr_CurrentCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("Ptr_CurrentCharacter is null."));
		return;
	}

	PB_ThrowingPowerGage->SetPercent(Ptr_CurrentCharacter->ChargedPower/50);
}
