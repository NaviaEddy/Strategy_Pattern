// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "EstrategiaNaveDeCombate.h"
#include "GameFramework/Actor.h"
#include "EstrategiaDeRetirada.generated.h"

UCLASS()
class STRATEGYPATTERN_API AEstrategiaDeRetirada : public AActor, public IEstrategiaNaveDeCombate
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaDeRetirada();

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
