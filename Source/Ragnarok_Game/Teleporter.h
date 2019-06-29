// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Teleporter.generated.h"

UCLASS()
class RAGNAROK_GAME_API ATeleporter : public AActor
{
	GENERATED_BODY()
	

private:
	UPROPERTY(EditDefaultsOnly, Category = Destination)
	FVector DestinationOrdinates;

public:	
	// Sets default values for this actor's properties
	ATeleporter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION(BlueprintCallable, Category=Teleport)
	void SetDestinationOrdinates(FVector coordinates);

public:
	UFUNCTION(BlueprintCallable, Category = Teleport)
	void TeleportPlayer();

};
