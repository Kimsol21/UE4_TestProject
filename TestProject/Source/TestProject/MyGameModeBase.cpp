// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"
#include "CrossHUD.h"


AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyCharacter::StaticClass(); //GameMode에 MyCharacter의 클래스 정보 지정.
	PlayerControllerClass = AMyPlayerController::StaticClass(); //GameMode에 MyPlayerController의 클래스 정보 지정.
	HUDClass = ACrossHUD::StaticClass();
}

