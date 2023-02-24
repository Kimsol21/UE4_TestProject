// Fill out your copyright notice in the Description page of Project Settings.


#include "CircularPlate.h"

// Sets default values
ACircularPlate::ACircularPlate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PLATE"));

	RootComponent = PlateMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_PLATE(TEXT("StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));
	if (SM_PLATE.Succeeded())
	{
		PlateMesh->SetStaticMesh(SM_PLATE.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MT_PLATE(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust'"));
	if (MT_PLATE.Succeeded())
	{
		PlateMesh->SetMaterial(0,MT_PLATE.Object);
	}

	PlateMesh->SetRelativeScale3D(FVector(3.0, 3.0, 0.1));



}

// Called when the game starts or when spawned
void ACircularPlate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACircularPlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotatePlate();
}

void ACircularPlate::RotatePlate()
{
	AddActorWorldRotation(FRotator(0.0f, RotationSpeed, 0.0f));
}

