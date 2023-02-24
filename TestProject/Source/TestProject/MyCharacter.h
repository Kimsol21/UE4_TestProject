// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyBallPool.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyCharacter.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnThrowingPowerChangedDelegate);


UCLASS()
class TESTPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMyCharacter(); //생성자

protected:
	virtual void BeginPlay() override; //게임이 시작할 때 호출 or 스폰되었을 때 호출.
	
public:	
	UPROPERTY(EditAnywhere, Category = Movement)
	float ThrowPower = 1300.f;
	float ChargedPower = 0.0f; //충전 파워

	virtual void Tick(float DeltaSeconds) override; //틱마다 호출.

	virtual void PostInitializeComponents() override; //Actor 컴포넌트가 초기화된 이후 호출. 

	UPROPERTY(VisibleAnywhere, Category = Camera) //스프링암
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera) //카메라
	UCameraComponent* Camera;

	TSubclassOf<class AMyBallPool> BallPoolObjectSubclass; //Pool 클래스정보
	TSubclassOf<class AMyBall> BallObjectSubclass; //Pool 클래스정보
	

	class AMyBall* CurrentBall;

	// 카메라 위치에서의 총구 오프셋
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;
	
	UPROPERTY()
	class AMyBallPool* BP; //Ball Pool

	void LookUp(float NewAxisValue); //마우스 상하 스크롤
	void Turn(float NewAxisValue); //마우스 좌우 스크롤
	void ChargeStart();//LMB Pressed
	void ChargeEnd(); //LMB Released, Fire!!!
	void Shoot();

	FOnThrowingPowerChangedDelegate OnThrowingPowerChangedDelegate;

private:
	UPROPERTY() //애님 인스턴스
	class UMyAnimInstance* MyAnim; 

	
	bool bCharging = false; //충전 중인지 여부




};
