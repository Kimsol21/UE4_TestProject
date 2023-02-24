// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBallPool.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MyBall.generated.h"

UCLASS()
class TESTPROJECT_API AMyBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyBall();

protected:
	// Called when the game starts or when spawned
	virtual void PostActorCreated() override;
	virtual void BeginPlay() override;
	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Ready(FVector SpawnTransform);
	void Shoot(FVector FowardVec, float Power);

	FORCEINLINE void SetBallPool(class AMyBallPool* InBallPool) { BallPool = InBallPool; } //Ǯ ���� Init �Լ�
	void ReturnSelf(); //�ڱ��ڽ� ��ȯ �Լ�
	void SetActive(bool IsActive); //Ȱ��ȭ ���� ���� �Լ�
	FORCEINLINE bool IsActive() { return bActive; } //Ȱ��ȭ ���� ��ȯ�ϴ� �Լ�

	UPROPERTY(VisibleAnywhere, Category = Ball) //Ball ����ƽ �޽�
	UStaticMeshComponent* BallMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile")
	class USphereComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent;

	

	void FireInDirection(const FVector& ShootDirection, float Power);//������Ÿ���� �ӵ��� �߻� �������� �ʱ�ȭ.

private:
	bool bActive; //Ȱ��ȭ ����
	class AMyBallPool* BallPool; //������Ʈ Ǯ

	FVector CurrentLocation; //�� ��ġ

	//UPROPERTY(VisibleDefaultsOnly, Category = Projectile) //�� �ݸ���
	//USphereComponent* CollisionComponent;

	
};
