// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ServerSideController.generated.h"

/**
 * 
 */

class AClientSideController;
class AServerSideCharacter;

UCLASS()
class MULTIPLAYERPROTOTYPE_API AServerSideController : public AAIController
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "Setup")
	AClientSideController* ClientSideControllerRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	AServerSideCharacter* ServerSideCharacterRef;
};
