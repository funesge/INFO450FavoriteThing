#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int ERROR1 = 101;

//GameItem class 
class GameItem
{
private:
	string gameTitle;
	string gameType;
	string gamePublisher;
	string favoriteCharacter;
	int gamePersonalRating;

public:
	GameItem();
	// string function will return game title for duplicate check
	string getGameTitle();
	int getGameItem();
	//friend function used to display games to console
	friend ostream & operator<<(ostream &os, const GameItem &item);

};