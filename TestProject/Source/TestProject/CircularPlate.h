// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CircularPlate.generated.h"

UCLASS()
class TESTPROJECT_API ACircularPlate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACircularPlate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = Plate)
	float RotationSpeed = 1.0f;
	void RotatePlate();

	UPROPERTY(VisibleAnywhere, Category = Plate)
	UStaticMeshComponent* PlateMesh;

};
