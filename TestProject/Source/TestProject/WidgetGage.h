// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetGage.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API UWidgetGage : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeOnInitialized() override;

public:

	UFUNCTION()
	void OnClickButton_Test();

	void BindThrowingPowerGageWidget(class AMyCharacter* Ptr_MyCharacter);

private:
	void UpdateProgressBar();

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* PB_ThrowingPowerGage;  
	class AMyCharacter* Ptr_CurrentCharacter;


};
  