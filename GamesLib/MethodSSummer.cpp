#include "ClassSSummer.h"

TSSummer::TSSummer() : TSportGames::TSportGames()
{
	locate = "";
}

TSSummer::TSSummer(string locate_)
{
	locate = locate_;
}

TSSummer::TSSummer(TSSummer& obj)
{
	locate = obj.GetLocate();
}

TSSummer::~TSSummer()
{}

string TSSummer::GetLocate()
{
	return locate;
}

void TSSummer::SetLocate()
{
	cin >> locate;
}

ostream& operator <<(ostream& output, TSSummer& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of play: " << var.nameOfGame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field << " | " << "Locate: " << var.locate << "\n"
		;
	return output;
}

istream& operator >>(istream& input, TSSummer& var)
{
	cout << "Name of Game: ";
	input >> var.nameOfGame;
	cout << "Count of Players: ";
	input >> var.countOfPlayers;
	if (var.countOfPlayers < 1)
		throw(1);
	cout << "Season: ";
	input >> var.season;
	cout << "Field for play: ";
	input >> var.field;
	cout << "Locate: ";
	input >> var.locate;
	return input;
}