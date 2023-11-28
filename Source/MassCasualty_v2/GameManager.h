// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameInstance_MassCas.h" 
#include "GameManager.generated.h"


UCLASS()
class MASSCASUALTY_V2_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	

	//AGameInstance_MassCas * GameInstance_MassCas;


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
	float gameTime;

	UPROPERTY(BlueprintReadWrite)
	float testiFloat;

	UPROPERTY(BlueprintReadWrite)
	int testiInt;

	UPROPERTY(BlueprintReadWrite)
	int totalSeconds;

};
