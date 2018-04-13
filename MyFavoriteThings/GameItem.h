#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int ERROR1 = 101;

//GameItem class 
class GameItem
{
	string gameTitle;
	string gameType;
	string gamePublisher;
	string favoriteCharacter;
	int gameRating;

public:
	GameItem();
	int getGameItem();

	//friend function used to display games to console
	friend ostream & operator<<(ostream &os, const GameItem &item);

};