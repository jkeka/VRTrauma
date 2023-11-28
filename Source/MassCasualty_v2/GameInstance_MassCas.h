// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstance_MassCas.generated.h"

/**
 * 
 */
UCLASS()
class MASSCASUALTY_V2_API UGameInstance_MassCas : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	float playTime;


};
