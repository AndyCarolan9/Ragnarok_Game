// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ragnarok_GameBombActor.generated.h"

UCLASS()
class RAGNAROK_GAME_API ARagnarok_GameBombActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARagnarok_GameBombActor();

protected:
	UPROPERTY(VisibleAnywhere, Category = Components)
	UStaticMeshComponent* MeshComp;

	UMaterialInstanceDynamic* MaterialInst;

	UPROPERTY(EditDefaultsOnly, Category=BombActor)
	float ExplodeDelay;

	UFUNCTION()
	void Explode();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
