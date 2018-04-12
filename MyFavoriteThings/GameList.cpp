#include "stdafx.h"
#include "GameList.h"
#include <iostream>
using namespace std;

GameList::GameList()
{
	listSize = 0;
}

int GameList::addGameItem()
{
	if (gList[listSize].getGameItem() == 0)
	{
		listSize++;
		return 0;
	}
	else
	{
		cout << "Error occured in addGameItem" << endl;
		return ERROR1;
	}
}

void GameList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << gList[i];
		cout << endl << endl;
	}
}