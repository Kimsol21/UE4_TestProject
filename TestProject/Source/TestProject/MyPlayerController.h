// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyCharacter.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMyPlayerController(); //»ý¼ºÀÚ

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UWidgetGage> GageWidgetClass;
	class UWidgetGage* Ptr_GageWidget;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	AMyCharacter* possessedPawn;

	void MouseY(float NewAxisValue);
	void MouseX(float NewAxisValue);
	void LMBPressed();
	void LMBReleased();
	
};
