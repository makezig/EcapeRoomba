// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */



class ROOMBAGAME_API StateManager
{
private:
	enum state{
		MainMenu,
		Ingame,
		Victory
	};
	state currentState = MainMenu;

	float lastRuntime = 0;

	void UpdateState();

public:

	StateManager();
	~StateManager();

	UFUNCTION(BlueprintCallable)
	void StartGame();
	UFUNCTION(BlueprintCallable)
	void Win(float timeSeconds);
	UFUNCTION(BlueprintCallable)
	void ReturnToMainMenu();

};
