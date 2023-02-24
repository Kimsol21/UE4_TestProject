// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "MyBallPool.h"
#include "MyBall.h"
#include "MyAnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Components/SphereComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//언리얼 오브젝트 생성 및 세부사항 설정.
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	//BP = CreateDefaultSubobject<AMyBallPool>(TEXT("BALLPOOL"));
	
	SpringArm->SetupAttachment(GetCapsuleComponent()); //캡슐 컴포넌트 하위에 부착.
	Camera->SetupAttachment(SpringArm); //스프링암 하위에 부착.

	SpringArm->SetRelativeLocation(FVector(0.0f, 40.0f, 0.0f));

	//메쉬 세부 
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0, -90.0f, 0.0f));
	//SpringArm->

	//에셋 불러오기.
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM_TEMP(TEXT("SkeletalMesh'/Game/Advanced_AI_SpawnSystem/DemoContent/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));
	if (SM_TEMP.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SM_TEMP.Object);
	}
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> ABP_TEMP(TEXT("AnimBlueprint'/Game/Animation/ABP_Character.ABP_Character_C'")); //클래스정보 가져오기.
	if (ABP_TEMP.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(ABP_TEMP.Class);
	}

	//ControlMode 설정.
	SpringArm->TargetOffset = FVector(0.0f, 0.0f, 100.0f);
	SpringArm->TargetArmLength = 140.0f; //스프링암 길이.
	SpringArm->bUsePawnControlRotation = true; //Pawn Control Rotation 을 사용할지 여부.
	SpringArm->bInheritPitch = true; //부모에게서 회전 값을 상속받을 건지 여부.
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bDoCollisionTest = false; //CollisionTest를 할지 여부. (하게되면 물체 충돌시 자동으로 길이 조정.)
	bUseControllerRotationYaw = false; // Controller의 Rotation Yaw값을 사용할지 여부.

	GetCharacterMovement()->bOrientRotationToMovement = true;//캐릭터가 움직이는 방향으로 캐릭터를 자동 회전시켜주는 기능.
	GetCharacterMovement()->bUseControllerDesiredRotation = false;//컨트롤 회전이 가리키는 방향으로 캐릭터가 부드럽게 회전.
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);

	BallPoolObjectSubclass = AMyBallPool::StaticClass();


	MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);

	BallObjectSubclass = AMyBall::StaticClass();

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	auto MyPool = GetWorld()->SpawnActor<AMyBallPool>(BallPoolObjectSubclass, FVector().ZeroVector, FRotator().ZeroRotator); // 볼풀 생성.
	BP = Cast<AMyBallPool>(MyPool);
}

void AMyCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bCharging)
	{
		ChargedPower = FMath::Clamp(ChargedPower+=0.3f, 0.0f, 50.0f);
		if (50.0f == ChargedPower) ChargedPower = 0.0f;

		OnThrowingPowerChangedDelegate.Broadcast();
		
	}
}

void AMyCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	MyAnim = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (nullptr == MyAnim)
	{
		UE_LOG(LogTemp, Error, TEXT("MyAnim is null!"));
		return;
	}

}

void AMyCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}

void AMyCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);//인자값을 PlayerController의 ControlRotation값으로 변환하는 명령.
}


void AMyCharacter::ChargeStart()
{
	bCharging = true;

	MyAnim->PlayThrowMontage();
	/*
	CurrentBall = BP->GetBallObject(); //월드에 스폰
	FName HandSocket(TEXT("hand_r"));
	if (GetMesh()->DoesSocketExist(HandSocket))
	{
		CurrentBall->AttachToComponent(this->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, HandSocket);
		CurrentBall->SetOwner(this);
	}
	CurrentBall->SetActive(true);

	*/
	
}

void AMyCharacter::ChargeEnd()
{
	MyAnim->JumpToThrowMontageSection(); //애니메이션 :  던지기 섹션으로 전환.
	bCharging = false; //차징이 끝났음을 저장.
	/*if (BP)
	{
		BP->GetBallObject()->Shoot(GetActorForwardVector(), ChargedPower);
	}*/
	//CurrentBall->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	//CurrentBall->ResetOwnedComponents();
	Shoot();

	ChargedPower = 0.0f;
}

void AMyCharacter::Shoot()
{
	//카메라 트랜스폼 구하기.
	FVector CameraLocation;
	FRotator CameraRotation;
	GetActorEyesViewPoint(CameraLocation, CameraRotation); //캐릭터가 보고있는 방향과 위치벡터 구하기.

	//MuzzleOffset을 카메라 스페이스에서 월드 스페이스로 변환.??
	FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
	FRotator MuzzleRotation = CameraRotation;

	// 조준선을 약간 윗쪽으로 조준합니다.
	MuzzleRotation.Pitch += 8.0f;
	MuzzleRotation.Yaw += 2.0f;

	UWorld* World = GetWorld();
	if (World)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
		AMyBall* MyProjectile = World->SpawnActor<AMyBall>(BallObjectSubclass, MuzzleLocation, MuzzleRotation, SpawnParams);
		FVector LaunchDirection = MuzzleRotation.Vector();
		UE_LOG(LogTemp, Error, TEXT("LaunchDirection : %f, %f, %f"), LaunchDirection.X, LaunchDirection.Y, LaunchDirection.Z);
		UE_LOG(LogTemp, Error, TEXT("The Force : %f, %f, %f"), LaunchDirection.X * ChargedPower, LaunchDirection.Y * ChargedPower, LaunchDirection.Z * ChargedPower);

		auto temp = MyProjectile->CollisionComponent;
		temp->AddForce(LaunchDirection * 10000 * temp->GetMass()*ChargedPower);
		

		// 발사 방향을 알아냅니다.
		//if (Projectile)
		//{
		//	FVector LaunchDirection = MuzzleRotation.Vector();
		//	Projectile->FireInDirection(LaunchDirection, ChargedPower);
		//}
		/*if (CurrentBall)
		{
			
			
		}
		*/
	}
}


