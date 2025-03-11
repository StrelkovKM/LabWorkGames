#include "ClassVSOW.h"

TVSOverwatch::TVSOverwatch() : TVShooters::TVShooters()
{
	nameOfGame = "Overwatch";
	countOfPlayers = 10;
	platform = "Cross";
	engine = "UE5";
	shootTipe = "HB";
	faceTipe = 1;
	fightTipe = "Fight";
}

TVSOverwatch::TVSOverwatch(string fightTipe_)
{
	fightTipe = fightTipe_;
}
TVSOverwatch::TVSOverwatch(TVSOverwatch& obj)
{
	fightTipe = obj.GetFight();
}

TVSOverwatch::~TVSOverwatch()
{

}

string TVSOverwatch::GetFight()
{
	return fightTipe;
}

void TVSOverwatch::SetFight()
{
	cin >> fightTipe;
}

ostream& operator <<(ostream& output, TVSOverwatch& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of game: " << var.nameOfGame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Mode: " << var.shootTipe << " | "
		<< "Face tipe: " << var.faceTipe << " | " << "Fight tipe: " << var.fightTipe
		<< "\n";
	return output;
}

istream& operator >>(istream& input, TVSOverwatch& var)
{
	cout << "Name of Game: ";
	input >> var.nameOfGame;
	cout << "Count of Players: ";
	input >> var.countOfPlayers;
	cout << "Platform for Game: ";
	input >> var.platform;
	cout << "Engine of Game: ";
	input >> var.engine;
	cout << "Shooter Tipe: ";
	input >> var.shootTipe;
	cout << "Face Tipe: ";
	input >> var.faceTipe;
	if (var.faceTipe < 0)
		throw(1);
	cout << "Fight Tipe: ";
	cin >> var.fightTipe;
	return input;
}