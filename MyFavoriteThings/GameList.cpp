#include "stdafx.h"
#include "GameList.h"
#include <iostream>
using namespace std;

//constructor for GameList
GameList::GameList()
{
	listSize = 0;
}
//bool detects duplicate game titles
bool GameList::duplicateDetection(GameItem game)
{
	int i = 0;
	for (i = 0; i < listSize; i++)
	{
		if (game.getGameTitle() == gList[i].getGameTitle())
		{
			cout << "Duplicate detetected, wont add to list.";
			cout << endl;
			return false;
		}
	}
	return true;
}


//adds gameitem to the list for later display
int GameList::addGameItem()
{
	GameItem addGame;
	addGame.getGameItem();
	if (duplicateDetection(addGame))
	{
		gList[listSize] = addGame;
		listSize++;
		return 0;
	}
	else
	{
		cout << "Error occured in addGameItem" << endl;
		return ERROR1;
	}
}

//displays list to user
void GameList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << gList[i];
		cout << endl << endl;
	}
}