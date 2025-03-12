#include <iostream>
#include "ClassVShooters.h" 

TVShooters::TVShooters() : TVGames::TVGames()
{
	shootTipe = "Shooter";
}

TVShooters::TVShooters(string shootTipe_)
{
	shootTipe = shootTipe_;
}

TVShooters::TVShooters(TVShooters& obj)
{
	shootTipe = obj.GetShoot();
}

TVShooters::~TVShooters()
{
}


string TVShooters::GetShoot()
{
	return shootTipe;
}


void TVShooters::SetShoot()
{
	cin >> shootTipe;
}

ostream& operator <<(ostream& output, TVShooters& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of game: " << var.nameOfGame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Mode: "<< var.shootTipe << " | "
		<< "Face tipe: " << var.faceTipe 
		<< "\n";

	return output;
}

istream& operator >>(istream& input, TVShooters& var)
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
	return input;
}