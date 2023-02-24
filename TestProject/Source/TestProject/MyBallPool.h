// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBallPool.generated.h"

UCLASS()
class TESTPROJECT_API AMyBallPool : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyBallPool();

	class AMyBall* GetBallObject(); //Pooled�� �� Object ��ȯ���ִ� �Լ�.
	void Expand(); //�뷮�� ������ Pool Ȯ��.
	void ReturnObject(class AMyBall* ReturnBallObject); //Pool���� ������Ʈ Push.

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TSubclassOf<class AMyBall> PooledBallObjectSubclass; //Ball Ŭ��������
	int32 PoolSize = 0; //Ǯ ũ��
	int32 ExpandSize = 10; //Ǯ�� ���� ��� Ȯ���� �뷮

private:
	TArray<class AMyBall*> Pool; //Ball ������Ʈ Ǯ


};
