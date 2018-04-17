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
	int addGameItem();
	bool duplicateDetection(GameItem game);
	void displayList();
};
