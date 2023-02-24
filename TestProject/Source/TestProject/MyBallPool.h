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

	class AMyBall* GetBallObject(); //Pooled된 공 Object 반환해주는 함수.
	void Expand(); //용량이 부족한 Pool 확장.
	void ReturnObject(class AMyBall* ReturnBallObject); //Pool에서 오브젝트 Push.

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TSubclassOf<class AMyBall> PooledBallObjectSubclass; //Ball 클래스정보
	int32 PoolSize = 0; //풀 크기
	int32 ExpandSize = 10; //풀이 작을 경우 확장할 용량

private:
	TArray<class AMyBall*> Pool; //Ball 오브젝트 풀


};
