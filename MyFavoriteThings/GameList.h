#pragma once
#include "stdafx.h"
#include "GameItem.h"

class GameList
{
private:
	GameItem gList[100];
	int listSize;
public:
	GameList();
	int addGameItem();
	void displayList();
};

