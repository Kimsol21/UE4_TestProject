// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

UMyAnimInstance::UMyAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> THROW_MONTAGE(TEXT("AnimMontage'/Game/Animation/MTG_Throw.MTG_Throw'"));
	if (THROW_MONTAGE.Succeeded())
	{
		ThrowMontage = THROW_MONTAGE.Object;
	}
}

void UMyAnimInstance::PlayThrowMontage()
{
	if (ThrowMontage)
	{
		Montage_Play(ThrowMontage);
	}
}

void UMyAnimInstance::JumpToThrowMontageSection()
{
	//if (Montage_IsPlaying(ThrowMontage))
	{
		//Montage_Stop(0.68f, ThrowMontage);
		//Montage_Play(ThrowMontage);
		Montage_JumpToSection("Shoot", ThrowMontage);
		//Montage_SetNextSection("Hold", "Shoot", ThrowMontage);
	}
	
}
