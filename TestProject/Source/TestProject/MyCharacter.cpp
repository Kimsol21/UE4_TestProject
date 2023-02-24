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

	//�𸮾� ������Ʈ ���� �� ���λ��� ����.
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	//BP = CreateDefaultSubobject<AMyBallPool>(TEXT("BALLPOOL"));
	
	SpringArm->SetupAttachment(GetCapsuleComponent()); //ĸ�� ������Ʈ ������ ����.
	Camera->SetupAttachment(SpringArm); //�������� ������ ����.

	SpringArm->SetRelativeLocation(FVector(0.0f, 40.0f, 0.0f));

	//�޽� ���� 
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0, -90.0f, 0.0f));
	//SpringArm->

	//���� �ҷ�����.
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM_TEMP(TEXT("SkeletalMesh'/Game/Advanced_AI_SpawnSystem/DemoContent/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));
	if (SM_TEMP.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SM_TEMP.Object);
	}
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> ABP_TEMP(TEXT("AnimBlueprint'/Game/Animation/ABP_Character.ABP_Character_C'")); //Ŭ�������� ��������.
	if (ABP_TEMP.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(ABP_TEMP.Class);
	}

	//ControlMode ����.
	SpringArm->TargetOffset = FVector(0.0f, 0.0f, 100.0f);
	SpringArm->TargetArmLength = 140.0f; //�������� ����.
	SpringArm->bUsePawnControlRotation = true; //Pawn Control Rotation �� ������� ����.
	SpringArm->bInheritPitch = true; //�θ𿡰Լ� ȸ�� ���� ��ӹ��� ���� ����.
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bDoCollisionTest = false; //CollisionTest�� ���� ����. (�ϰԵǸ� ��ü �浹�� �ڵ����� ���� ����.)
	bUseControllerRotationYaw = false; // Controller�� Rotation Yaw���� ������� ����.

	GetCharacterMovement()->bOrientRotationToMovement = true;//ĳ���Ͱ� �����̴� �������� ĳ���͸� �ڵ� ȸ�������ִ� ���.
	GetCharacterMovement()->bUseControllerDesiredRotation = false;//��Ʈ�� ȸ���� ����Ű�� �������� ĳ���Ͱ� �ε巴�� ȸ��.
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);

	BallPoolObjectSubclass = AMyBallPool::StaticClass();


	MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);

	BallObjectSubclass = AMyBall::StaticClass();

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	auto MyPool = GetWorld()->SpawnActor<AMyBallPool>(BallPoolObjectSubclass, FVector().ZeroVector, FRotator().ZeroRotator); // ��Ǯ ����.
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
	AddControllerYawInput(NewAxisValue);//���ڰ��� PlayerController�� ControlRotation������ ��ȯ�ϴ� ���.
}


void AMyCharacter::ChargeStart()
{
	bCharging = true;

	MyAnim->PlayThrowMontage();
	/*
	CurrentBall = BP->GetBallObject(); //���忡 ����
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
	MyAnim->JumpToThrowMontageSection(); //�ִϸ��̼� :  ������ �������� ��ȯ.
	bCharging = false; //��¡�� �������� ����.
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
	//ī�޶� Ʈ������ ���ϱ�.
	FVector CameraLocation;
	FRotator CameraRotation;
	GetActorEyesViewPoint(CameraLocation, CameraRotation); //ĳ���Ͱ� �����ִ� ����� ��ġ���� ���ϱ�.

	//MuzzleOffset�� ī�޶� �����̽����� ���� �����̽��� ��ȯ.??
	FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
	FRotator MuzzleRotation = CameraRotation;

	// ���ؼ��� �ణ �������� �����մϴ�.
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
		

		// �߻� ������ �˾Ƴ��ϴ�.
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


