// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "EstrategiaNaveDeCombate.h"
#include "GameFramework/Actor.h"
#include "NaveDeCombate.generated.h"

UCLASS()
class STRATEGYPATTERN_API ANaveDeCombate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveDeCombate();

private:
	//La estrategia de la batalla actual
	IEstrategiaNaveDeCombate* EstrategiaNaveDeCombate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Cambia la maniobra y establece la variable "EstrategiaDeBatalla"
	void AlterarManiobras(AActor* _EstrategiaDeBatalla);

	//Emplear la estrategia de batalla actual
	void Emplear();

};
