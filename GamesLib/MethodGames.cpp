#include "ClassGames.h"
#include <iostream>
using namespace std;

TGames::TGames()
{
	countOfPlayers = 1;
	nameOfGame = "Name of Game";
}

TGames::TGames(int countOfPlayers_, string nameOfGame_) : TGames::TGames()
{
	if (countOfPlayers_ < 1)
		throw(1);
	else countOfPlayers = countOfPlayers_;
	nameOfGame = nameOfGame_;
}

TGames::TGames(TGames& obj)
{
	countOfPlayers = obj.GetCount();
	nameOfGame = obj.GetName();
}

TGames::~TGames()
{}


int TGames::GetCount()
{
	return countOfPlayers;
}

string TGames::GetName()
{
	return nameOfGame;
}

void TGames::SetName()
{
	cin >> nameOfGame;
}

void TGames::SetCount()
{
	cin >> countOfPlayers;
	if (countOfPlayers < 1)
		throw(1);
}

ostream& operator <<(ostream& output, TGames& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of play: " << var.nameOfGame
		;

	return output;
}

istream& operator >>(istream& input, TGames& var)
{
	cout << "Name of Game: ";
	input >> var.nameOfGame;
	cout << "Count of Players: ";
	input >> var.countOfPlayers;
	if (var.countOfPlayers < 1)
		throw(1);
	return input;
}