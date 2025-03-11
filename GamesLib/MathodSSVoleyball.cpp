#include "ClassSSVoleyball.h"

TSSVoleyball::TSSVoleyball() : TSSummer::TSSummer()
{
	countOfPlayers = 12;
	nameOfGame = "Voleyball";
	season = "Summer";
	field = "Graund";
	locate = "Cross";
	area = "Area";
}

TSSVoleyball::TSSVoleyball(string area_)
{
	area = area_;
}

TSSVoleyball::TSSVoleyball(TSSVoleyball& obj)
{
	area = obj.GetArea();
}

TSSVoleyball::~TSSVoleyball()
{
}

string TSSVoleyball::GetArea()
{
	return area;
}

void TSSVoleyball::SetArea()
{
	cin >> area;
}

ostream& operator <<(ostream& output, TSSVoleyball& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of play: " << var.nameOfGame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field << " | " << "Locate: " << var.locate << " | "
		<< "Area: " << var.area << "\n";
	;
	return output;
}

istream& operator >>(istream& input, TSSVoleyball& var)
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
	cout << "Area: ";
	input >> var.area;
	return input;
}