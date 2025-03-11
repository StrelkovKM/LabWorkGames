#include "ClassVSPUBG.h"

TVSPUBG::TVSPUBG() : TVShooters::TVShooters()
{
	nameOfGame = "PUBG";
	countOfPlayers = 100;
	platform = "Cross";
	engine = "UE4";
	shootTipe = "RB";
	faceTipe = 3;
	teamTipe = "Team";
}

TVSPUBG::TVSPUBG(string teamTipe_)
{
	teamTipe = teamTipe_;
}

TVSPUBG::TVSPUBG(TVSPUBG& obj)
{
	teamTipe = obj.GetTeam();
}

TVSPUBG::~TVSPUBG()
{

}

string TVSPUBG::GetTeam()
{
	return teamTipe;
}

void TVSPUBG::SetTeam()
{
	cin >> teamTipe;
}

ostream& operator <<(ostream& output, TVSPUBG& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of game: " << var.nameOfGame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Mode: " << var.shootTipe << " | "
		<< "Face tipe: " << var.faceTipe << " | " << "Fight tipe: " << var.teamTipe
		<< "\n";
	return output;
}

istream& operator >>(istream& input, TVSPUBG& var)
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
	cout << "Team Tipe: ";
	cin >> var.teamTipe;
	return input;
} 