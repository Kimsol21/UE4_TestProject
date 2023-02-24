// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBallPool.h"
#include "MyBall.h"


// Sets default values
AMyBallPool::AMyBallPool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	PooledBallObjectSubclass = AMyBall::StaticClass();
}

AMyBall* AMyBallPool::GetBallObject()
{
	if (Pool.Num() == 0) Expand(); //Pool�� ũ�Ⱑ 0�̶�� Ȯ��.
	auto TempBall = Pool.Pop();
	return Pool.Pop(); //Pool�� ������Ʈ �ϳ� ������ ��ȯ.
}

void AMyBallPool::Expand()
{
	for (int i = 0; i < ExpandSize; i++) //ExpandSize��ŭ ������Ʈ ����, ��Ȱ��ȭ ó��, Pool�迭�� Push
	{
		AMyBall* PoolableActor = GetWorld()->SpawnActor<AMyBall>(PooledBallObjectSubclass, FVector().ZeroVector, FRotator().ZeroRotator);
		if (PoolableActor)
		{
			PoolableActor->SetBallPool(this);
			PoolableActor->SetActive(false);
			Pool.Push(PoolableActor);
		}		
	}
	PoolSize += ExpandSize; //Ǯ ������ Ȯ��.
}

void AMyBallPool::ReturnObject(AMyBall* ReturnBallObject)
{
	Pool.Push(ReturnBallObject);
}

// Called when the game starts or when spawned
void AMyBallPool::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyBallPool::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

