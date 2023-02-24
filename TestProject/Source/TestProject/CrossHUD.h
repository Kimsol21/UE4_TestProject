// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CrossHUD.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT_API ACrossHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACrossHUD();

protected:
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrosshairTexture;

public:
	virtual void DrawHUD() override;

};
