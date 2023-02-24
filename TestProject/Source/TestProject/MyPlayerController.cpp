// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "WidgetGage.h"
#include "MyCharacter.h"

AMyPlayerController::AMyPlayerController()
{
	static ConstructorHelpers::FClassFinder<UWidgetGage> GAGE_WDG(TEXT("WidgetBlueprint'/Game/UI/HUD/UI_PowerGage.UI_PowerGage_C'"));
	if (GAGE_WDG.Succeeded())
	{
		GageWidgetClass = GAGE_WDG.Class;
	}
}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode; //���ӿ��� �Է°� ����.
	SetInputMode(InputMode);
	//SetInputMode(FInputModeGameAndUI());

	possessedPawn = Cast<AMyCharacter>(GetPawn()); //���ǵ� �� ��������.

	
	Ptr_GageWidget = CreateWidget<UWidgetGage>(this, GageWidgetClass);
	Ptr_GageWidget->AddToViewport();
	Ptr_GageWidget->BindThrowingPowerGageWidget(possessedPawn);
	

}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// ������ �Է� ������ Pawn�� �Լ��� Binding��Ű��.
	InputComponent->BindAxis(TEXT("LookUp"), this, &AMyPlayerController::MouseY);
	InputComponent->BindAxis(TEXT("Turn"), this, &AMyPlayerController::MouseX);
	InputComponent->BindAction(TEXT("Charging"), EInputEvent::IE_Pressed ,this, &AMyPlayerController::LMBPressed);
	InputComponent->BindAction(TEXT("Charging"), EInputEvent::IE_Released, this, &AMyPlayerController::LMBReleased);  
}

void AMyPlayerController::MouseY(float NewAxisValue)
{
	if (possessedPawn)
	{
		possessedPawn->LookUp(NewAxisValue);
	}
}

void AMyPlayerController::MouseX(float NewAxisValue)
{
	if (possessedPawn)
	{
		possessedPawn->Turn(NewAxisValue);
	}
}

void AMyPlayerController::LMBPressed()
{
	if (possessedPawn)
	{
		possessedPawn->ChargeStart();
	}
}

void AMyPlayerController::LMBReleased()
{
	if (possessedPawn)
	{
		possessedPawn->ChargeEnd();
	}
}
