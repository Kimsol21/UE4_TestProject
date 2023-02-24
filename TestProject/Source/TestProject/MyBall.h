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

	FORCEINLINE void SetBallPool(class AMyBallPool* InBallPool) { BallPool = InBallPool; } //풀 정보 Init 함수
	void ReturnSelf(); //자기자신 반환 함수
	void SetActive(bool IsActive); //활성화 여부 설정 함수
	FORCEINLINE bool IsActive() { return bActive; } //활성화 여부 반환하는 함수

	UPROPERTY(VisibleAnywhere, Category = Ball) //Ball 스태틱 메쉬
	UStaticMeshComponent* BallMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile")
	class USphereComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent;

	

	void FireInDirection(const FVector& ShootDirection, float Power);//프로젝타일의 속도를 발사 방향으로 초기화.

private:
	bool bActive; //활성화 여부
	class AMyBallPool* BallPool; //오브젝트 풀

	FVector CurrentLocation; //공 위치

	//UPROPERTY(VisibleDefaultsOnly, Category = Projectile) //공 콜리전
	//USphereComponent* CollisionComponent;

	
};
