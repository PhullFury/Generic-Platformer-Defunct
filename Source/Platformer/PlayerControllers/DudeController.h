// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DudeController.generated.h"

class UUserWidget;

UCLASS()
class PLATFORMER_API ADudeController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (AllowPrivateAccess = "true"))
		TSubclassOf<UUserWidget> HUDBP;
	UPROPERTY()
		UUserWidget* HUD;
};