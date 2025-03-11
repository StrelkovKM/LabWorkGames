#include <iostream>
#include "ClassVPlot.h" 

TVPlot::~TVPlot()
{
}

TVPlot::TVPlot() : TVGames::TVGames()
{
	styleTipe = "Style";
}

TVPlot::TVPlot(string styleTipe_)
{
	styleTipe = styleTipe_;
}

TVPlot::TVPlot(TVPlot& obj)
{
	styleTipe = obj.GetStyle();
	faceTipe = obj.GetFace();
}


string TVPlot::GetStyle()
{
	return styleTipe;
}


void TVPlot::SetStyle()
{
	cin >> styleTipe;

}

ostream& operator <<(ostream& output, TVPlot& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of game: " << var.nameOfGame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game style: " << var.styleTipe << " | "
		<< "Face tipe: " << var.faceTipe
		<< "\n";

	return output;
}

istream& operator >>(istream& input, TVPlot& var)
{
	cout << "Name of Game: ";
	input >> var.nameOfGame;
	cout << "Count of Players: ";
	input >> var.countOfPlayers;
	if (var.countOfPlayers < 0)
		throw(1);
	cout << "Platform for Game: ";
	input >> var.platform;
	cout << "Engine for Game: ";
	input >> var.engine;
	cout << "Game style: ";
	input >> var.styleTipe;
	cout << "Face tipe: ";
	input >> var.faceTipe;
	if (var.faceTipe < 0)
		throw(1);
	return input;
}