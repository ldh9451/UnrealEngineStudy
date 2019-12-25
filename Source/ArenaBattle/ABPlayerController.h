// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;

	// Note : 부모 클래스에서 final로 지정도니 함수나 클래스를 재정의 할 수 없음.
	//virtual void Possess(APawn* aPawn) override;
	
protected:
	virtual void BeginPlay() override;
};
