#include "stdafx.h"
#include "GameList.h"
#include <iostream>
using namespace std;

//constructor for GameList
GameList::GameList()
{
	listSize = 0;
}

//adds gameitem to the list for later display
int GameList::addGameItem()
{
	if (gList[listSize].getGameItem() == 0)// 0 returned for success
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