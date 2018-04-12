// MyFavoriteThings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameItem.h"
#include "GameList.h"
using namespace std;

void displayInstructions();

int main()
{
	char answer;
	displayInstructions();
	GameList myList;
	do {
		myList.addGameItem();
		cout << "Add another Game to list??(Y or y for yes): ";
		cin >> answer;
		cout << endl;
		cin.clear();
		cin.ignore();
	} while (answer == 'y' || answer == 'Y');
	cout << endl;
	myList.displayList();
	return 0;
}

void displayInstructions()
{
	cout << "Welcome to my favorite games list!" << endl;
	cout << "This program will build and maintain ";
	cout << "a list of your favorite things." << endl;
	cout << "You will be asked to input game title, game type, game publisher,";
	cout << "your favorite character, and a game rating." << endl;
}