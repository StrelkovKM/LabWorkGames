#include "ClassSSFootball.h"

TSSFootball::TSSFootball() : TSSummer::TSSummer()
{
	countOfPlayers = 24;
	nameOfGame = "Football";
	season = "Summer";
	field = "Graund";
	locate = "Indoors";
	format = "Format";
}

TSSFootball::TSSFootball(string format_)
{
	format = format_;
}

TSSFootball::TSSFootball(TSSFootball& obj)
{
	format = obj.GetFormat();
}

TSSFootball::~TSSFootball()
{
}

string TSSFootball::GetFormat()
{
	return format;
}

void TSSFootball::SetFormat()
{
	cin >> format;
}

ostream& operator <<(ostream& output, TSSFootball& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of play: " << var.nameOfGame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field << " | " << "Locate: " << var.locate << " | "
		<< "Format: " << var.format << "\n";
	;
	return output;
}

istream& operator >>(istream& input, TSSFootball& var)
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
	cout << "Format: ";
	input >> var.format;
	return input;
}