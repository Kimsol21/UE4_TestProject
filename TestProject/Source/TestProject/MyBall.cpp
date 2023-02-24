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
	//����ƽ�޽� ���� �ҷ��� �� ����
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BALL(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (SM_BALL.Succeeded())
	{
		BallMesh->SetStaticMesh(SM_BALL.Object);
	}
	BallMesh->SetupAttachment(CollisionComponent);
	

	


	//ProjectileMovementComponent�� ����Ͽ� �� �߻�ü(��)�� ��� ����.	
	//ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	//ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	//ProjectileMovementComponent->bAutoActivate = false;
	////ProjectileMovementComponent->InitialSpeed = 1000.0f;//0���� ũ�� Velocity�� �������� ó���ϰ� �ʱ� Velocity���� �ش簪���� �������մϴ�.
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
	CollisionComponent->OnComponentHit.AddDynamic(this, &AMyBall::OnHit);//��������Ʈ ���ε�



	

}

void AMyBall::PostActorCreated()
{
	Super::PostActorCreated();

	

	//ProjectileMovementComponent->InitialSpeed = MovementSpeed;//0���� ũ�� Velocity�� �������� ó���ϰ� �ʱ� Velocity���� �ش簪���� �������մϴ�.
}

// Called when the game starts or when spawned
void AMyBall::BeginPlay()
{
	Super::BeginPlay();
	
	//CollisionComponent->AddForce(FVector(1.0f, -10000.0f, 10.0f));
	//AMyCharacter* Pitcher = Cast<AMyCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn()); //���� ���� �޾ƿ���.
	//if (nullptr == Pitcher)
	//{
	//	UE_LOG(LogTemp, Error, TEXT("The Pitcher is null!"));
	//	return;

	//}
	//ProjectileMovementComponent->InitialSpeed = Pitcher->ThrowPower; //������ ������ �Ŀ��� ������.

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
	BallMesh->AddForce(FowardVec * 0.01f); //���� �������ֱ�.
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
	SetActorHiddenInGame(!bActive); //���ӿ��� ���͸� ������ ����.
}

void AMyBall::FireInDirection(const FVector& ShootDirection, float Power)
{
	//UE_LOG(LogTemp, Error, TEXT("Shoot Power : %f"), Power);
	//ProjectileMovementComponent->InitialSpeed = 500.0f* Power;
	//ProjectileMovementComponent->Velocity = ShootDirection;
	////BallMesh->SetSimulatePhysics(true);

}

