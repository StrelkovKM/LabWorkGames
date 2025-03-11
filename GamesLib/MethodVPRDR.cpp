#include "ClassVPRDR.h"


TVPRedDead::TVPRedDead() : TVPlot::TVPlot()
{
	nameOfGame = "RDR";
	countOfPlayers = 4;
	platform = "Cross";
	engine = "UE4";
	styleTipe = "Wild West";
	faceTipe = 3;
	pickHero = "Hero";
}

TVPRedDead::TVPRedDead(string pickHero_)
{
	pickHero = pickHero_;
}

TVPRedDead::TVPRedDead (TVPRedDead& obj)
{
	pickHero = obj.GetHero();
}

TVPRedDead::~TVPRedDead()
{

}

string TVPRedDead::GetHero()
{
	return pickHero;
}

void TVPRedDead::SetHero()
{
	cin >> pickHero;
}

ostream& operator <<(ostream& output, TVPRedDead& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of game: " << var.nameOfGame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Style: " << var.styleTipe << " | "
		<< "Face tipe: " << var.faceTipe << " | " << "Picked Hero: " << var.pickHero
		<< "\n";
	return output;
}

istream& operator >>(istream& input, TVPRedDead& var)
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
	cout << "Pick Hero: ";
	input >> var.pickHero;
	return input;
}