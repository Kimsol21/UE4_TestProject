// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBall.h"
#include "MyBallPool.h"
#include "MyCharacter.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"
#include "Engine/Classes/Components/SphereComponent.h"
#include "Components/PrimitiveComponent.h"

// Sets default values
AMyBall::AMyBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(15.0f);
	RootComponent = CollisionComponent;

	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BALL"));
	//스태틱메쉬 에셋 불러온 후 적용
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BALL(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (SM_BALL.Succeeded())
	{
		BallMesh->SetStaticMesh(SM_BALL.Object);
	}
	BallMesh->SetupAttachment(CollisionComponent);
	

	


	//ProjectileMovementComponent를 사용하여 이 발사체(공)의 운동을 조정.	
	//ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	//ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	//ProjectileMovementComponent->bAutoActivate = false;
	////ProjectileMovementComponent->InitialSpeed = 1000.0f;//0보다 크면 Velocity를 방향으로 처리하고 초기 Velocity값을 해당값으로 재정의합니다.
	//ProjectileMovementComponent->MaxSpeed = 3000.0f;
	//ProjectileMovementComponent->bRotationFollowsVelocity = true;
	//ProjectileMovementComponent->bShouldBounce = true;
	////ProjectileMovementComponent->Bounciness = 1.0f;
	
	

	CollisionComponent->SetSimulatePhysics(true);
	//BallMesh->SetNotifyRigidBodyCollision(true);
	BallMesh->SetRelativeScale3D(FVector(0.3, 0.3, 0.3));
	BallMesh->SetCollisionProfileName(TEXT("NoCollision"));
	BallMesh->SetRelativeLocation(FVector(0.0f, -0.0f, -15.0f));
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
	CollisionComponent->OnComponentHit.AddDynamic(this, &AMyBall::OnHit);//델리게이트 바인딩



	

}

void AMyBall::PostActorCreated()
{
	Super::PostActorCreated();

	

	//ProjectileMovementComponent->InitialSpeed = MovementSpeed;//0보다 크면 Velocity를 방향으로 처리하고 초기 Velocity값을 해당값으로 재정의합니다.
}

// Called when the game starts or when spawned
void AMyBall::BeginPlay()
{
	Super::BeginPlay();
	
	//CollisionComponent->AddForce(FVector(1.0f, -10000.0f, 10.0f));
	//AMyCharacter* Pitcher = Cast<AMyCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn()); //투수 정보 받아오기.
	//if (nullptr == Pitcher)
	//{
	//	UE_LOG(LogTemp, Error, TEXT("The Pitcher is null!"));
	//	return;

	//}
	//ProjectileMovementComponent->InitialSpeed = Pitcher->ThrowPower; //투수가 설정한 파워로 던지기.

}

void AMyBall::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	
}

void AMyBall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	/*if (OtherActor != this && OtherComponent->IsSimulatingPhysics())
	{
		OtherComponent->AddImpulseAtLocation(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);
	}
	*/
}

// Called every frame
void AMyBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyBall::Ready(FVector SpawnTransform)
{
	if (!bActive) SetActive(true);
	SetActorLocation(SpawnTransform);
	CurrentLocation = SpawnTransform;
}

void AMyBall::Shoot(FVector FowardVec, float Power)
{
	if (!bActive) SetActive(true);
	SetActorLocation(CurrentLocation);
	BallMesh->AddForce(FowardVec * 0.01f); //공에 힘가해주기.
}

void AMyBall::ReturnSelf()
{
	if (BallPool == nullptr) return;
	BallPool->ReturnObject(this);
	this->SetActive(false);
}

void AMyBall::SetActive(bool IsActive)
{
	bActive = IsActive;
	SetActorHiddenInGame(!bActive); //게임에서 엑터를 숨길지 여부.
}

void AMyBall::FireInDirection(const FVector& ShootDirection, float Power)
{
	//UE_LOG(LogTemp, Error, TEXT("Shoot Power : %f"), Power);
	//ProjectileMovementComponent->InitialSpeed = 500.0f* Power;
	//ProjectileMovementComponent->Velocity = ShootDirection;
	////BallMesh->SetSimulatePhysics(true);

}

