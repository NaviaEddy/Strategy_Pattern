// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaDeRetirada.h"

// Sets default values
AEstrategiaDeRetirada::AEstrategiaDeRetirada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaDeRetirada::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaDeRetirada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaDeRetirada::Maniobra()
{
	//Ejecuta el tipo de rutina de esta estrategia
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("¡A toda velocidad!")));
}

