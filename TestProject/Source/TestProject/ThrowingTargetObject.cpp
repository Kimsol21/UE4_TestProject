// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowingTargetObject.h"

// Sets default values
AThrowingTargetObject::AThrowingTargetObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThrowingTargetMesh"));
	RootComponent = ObjectMesh;

	//디폴트 스태틱메쉬 에셋 불러온 후 적용
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_TEMP(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	if (SM_TEMP.Succeeded())
	{
		ObjectMesh->SetStaticMesh(SM_TEMP.Object);
	}

	ObjectMesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));

}

// Called when the game starts or when spawned
void AThrowingTargetObject::BeginPlay()
{
	Super::BeginPlay();
	
}


