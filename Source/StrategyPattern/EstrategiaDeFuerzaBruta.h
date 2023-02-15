// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaNaveDeCombate.h"
#include "EstrategiaDeFuerzaBruta.generated.h"

UCLASS()
class STRATEGYPATTERN_API AEstrategiaDeFuerzaBruta : public AActor, public IEstrategiaNaveDeCombate
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaDeFuerzaBruta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Ejecuta la maniobra de la estrategia
	void Maniobra() override;

};
