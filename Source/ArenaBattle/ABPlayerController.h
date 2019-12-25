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

	// Note : �θ� Ŭ�������� final�� �������� �Լ��� Ŭ������ ������ �� �� ����.
	//virtual void Possess(APawn* aPawn) override;
	
protected:
	virtual void BeginPlay() override;
};