// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaDeFuerzaBruta.h"

// Sets default values
AEstrategiaDeFuerzaBruta::AEstrategiaDeFuerzaBruta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaDeFuerzaBruta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaDeFuerzaBruta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaDeFuerzaBruta::Maniobra()
{
	//Ejecuta el tipo de rutina de esta estrategia
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Podemos enfrentarnos a estas naves")));

}

