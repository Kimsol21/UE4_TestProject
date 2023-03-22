// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ThrowingTargetObject.generated.h"

UCLASS()
class TESTPROJECT_API AThrowingTargetObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThrowingTargetObject();


	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ObjectMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	



};
