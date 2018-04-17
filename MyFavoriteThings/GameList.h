#pragma once
#include "stdafx.h"
#include "GameItem.h"
#include <string>

//GameList class with array
class GameList
{
private:
	GameItem gList[100];
	int listSize;
public:
	GameList();
	//function adds game to list if not duplicate
	int addGameItem();
	// function used to detect duplicate
	bool duplicateDetection(GameItem game);
	// function display list
	void displayList();
};
