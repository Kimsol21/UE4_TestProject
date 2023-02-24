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
	AMyCharacter(); //������

protected:
	virtual void BeginPlay() override; //������ ������ �� ȣ�� or �����Ǿ��� �� ȣ��.
	
public:	
	UPROPERTY(EditAnywhere, Category = Movement)
	float ThrowPower = 1300.f;
	float ChargedPower = 0.0f; //���� �Ŀ�

	virtual void Tick(float DeltaSeconds) override; //ƽ���� ȣ��.

	virtual void PostInitializeComponents() override; //Actor ������Ʈ�� �ʱ�ȭ�� ���� ȣ��. 

	UPROPERTY(VisibleAnywhere, Category = Camera) //��������
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera) //ī�޶�
	UCameraComponent* Camera;

	TSubclassOf<class AMyBallPool> BallPoolObjectSubclass; //Pool Ŭ��������
	TSubclassOf<class AMyBall> BallObjectSubclass; //Pool Ŭ��������
	

	class AMyBall* CurrentBall;

	// ī�޶� ��ġ������ �ѱ� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;
	
	UPROPERTY()
	class AMyBallPool* BP; //Ball Pool

	void LookUp(float NewAxisValue); //���콺 ���� ��ũ��
	void Turn(float NewAxisValue); //���콺 �¿� ��ũ��
	void ChargeStart();//LMB Pressed
	void ChargeEnd(); //LMB Released, Fire!!!
	void Shoot();

	FOnThrowingPowerChangedDelegate OnThrowingPowerChangedDelegate;

private:
	UPROPERTY() //�ִ� �ν��Ͻ�
	class UMyAnimInstance* MyAnim; 

	
	bool bCharging = false; //���� ������ ����




};
