// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "Math/UnrealMathUtility.h" 
#include "Engine/World.h"

// Sets default values
AGameManager::AGameManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("This is GameManagers BeginPlay: %f"), GetTotalSeconds());

}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	gameTime = gameTime + DeltaTime;
	totalSeconds = FMath::RoundToInt(gameTime);


	UE_LOG(LogTemp, Warning, TEXT("This is GameManagers DeltaTime: %d"), totalSeconds);
	//UE_LOG(LogTemp, Warning, TEXT("This is GameInstance_MassCas float through GameManager: %d"), AGameInstance_MassCas::playTime);

}
