#include <iostream>
#include "ClassVGames.h"

TVGames::TVGames() : TGames::TGames()
{
	platform = "Platform";
	engine = "Engine";
	faceTipe = 1;
}

TVGames::TVGames(string platform_, string engine_, int faceTipe_)
{
	platform = platform_;
	engine = engine_;
	if (faceTipe_ < 0)
		throw(1);
	faceTipe = faceTipe_;
}

TVGames::TVGames(TVGames& obj)
{
	platform = obj.GetPlatform();
	engine = obj.GetEngine();
	faceTipe = obj.GetFace();
}
TVGames::~TVGames()
{}


string TVGames::GetPlatform()
{
	return platform;
}

string TVGames::GetEngine()
{
	return engine;
}

int TVGames::GetFace()
{
	return faceTipe;
}

void TVGames::SetPlatform()
{
	cin >> platform;
}

void TVGames::SetEngine()
{
	cin >> engine;
}

void TVGames::SetFace()
{
	cin >> faceTipe;
	if (faceTipe < 0)
		throw(1);
}


ostream& operator <<(ostream& output, TVGames& var)
{
	output 
		<< "Count of players: "<< var.countOfPlayers << " | " 
		<< "Name of play: " << var.nameOfGame << " | " << "Platform: " << var.platform << " | " 
		<< "Engine: " << var.engine
		;

	return output;
}

istream& operator >>(istream& input, TVGames& var)
{
	cout << "Name of Game: ";
	input >> var.nameOfGame;
	cout << "Count of Players: ";
	input >> var.countOfPlayers;
	if (var.countOfPlayers < 1)
		throw(1);
	cout << "Platform for Game: ";
	input >> var.platform;
	cout << "Engine for Game: ";
	input >> var.engine;
	return input;

}