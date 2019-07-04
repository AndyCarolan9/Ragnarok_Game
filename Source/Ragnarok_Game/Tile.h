// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Teleporter.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UCLASS()
class RAGNAROK_GAME_API ATile : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditDefaultsOnly, Category = ID)
	int32 id;

	UPROPERTY(EditDefaultsOnly, Category = Teleporters)
		TArray<ATeleporter*> teleporters;

public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
