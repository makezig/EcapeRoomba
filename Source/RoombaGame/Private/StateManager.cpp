// Fill out your copyright notice in the Description page of Project Settings.


#include "StateManager.h"

StateManager::StateManager()
{
}

StateManager::~StateManager()
{
}

void StateManager::UpdateState() {
	switch (currentState) {
	case Ingame:
		//Destroy the main menu

		//Load the main level

		break;
	case Victory:
		//Destoy the main level

		//Load the win screne/level
		//Send the last run time to win level scripts

		break;
	case MainMenu:
		//Destory all other scenes/levels (since can be called from either win or ingame

		//Load main menu

		break;
	default:
	}
}

void StateManager::StartGame() {
	currentState = Ingame;
	UpdateState();
}

void StateManager::Win(float timeSeconds){
	currentState = Victory;
	lastRuntime = timeSeconds;
	UpdateState();
}

void StateManager::ReturnToMainMenu() {
	currentState = MainMenu;
	UpdateState();
}