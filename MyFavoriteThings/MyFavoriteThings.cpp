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
	//loop used to allow user to add items until they wish to stop
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

//function used to display instructions to user
void displayInstructions()
{
	cout << "Welcome to my favorite games list!!!" << endl;
	cout << endl;
	cout << "This program will build and maintain ";
	cout << "a list of your favorite games." << endl;
	cout << "You will be asked to input game title,";
	cout << " game type, game publisher," << endl;
	cout << "your favorite character, and a personal game rating." << endl;
}