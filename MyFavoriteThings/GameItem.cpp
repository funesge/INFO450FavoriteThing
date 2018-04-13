#include "stdafx.h"
#include "GameItem.h"

//Default GameItem Constructor
GameItem::GameItem()
{
	gameTitle = "";
	gameType = "";
	gamePublisher = "";
	favoriteCharacter = "";
	gameRating = 0;
}
//used to get info from user
int GameItem::getGameItem()
{
	cout << "What is the game title?: ";
	getline(cin, gameTitle);
	cout << "What type of game is this?(Adventure, action, etc): ";
	getline(cin, gameType);
	cout << "Who published this game?: ";
	getline(cin, gamePublisher);
	cout << "Who is your favorite character in the game?: ";
	getline(cin, favoriteCharacter);
	cout << "What is the game rating 1-5?: ";
	cin >> gameRating;
	if (!cin.good())
	{
		cout << "Failure to read game rating." << endl;
		cin.clear();
		cin.ignore(256, '\n');//ignores 256 characters or until new line//
		return ERROR1;
	}
	cin.clear();
	cin.ignore();
	return 0;
}
//overloaded friend function to display favorite games to console
ostream & operator<<(ostream &os, const GameItem &item)
{
	os << "**** Game ****" << endl;
	os << "Game Title: " << item.gameTitle << endl;
	os << "Game Type: " << item.gameType << endl;
	os << "Game Publisher: " << item.gamePublisher << endl;
	os << "Favorite Character: " << item.favoriteCharacter << endl;
	os << "Game Rating: " << item.gameRating << endl;
	return os;

}