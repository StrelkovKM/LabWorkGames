#include "ClassSWCurling.h"

TSWCurling::TSWCurling() : TSWinter::TSWinter()
{
	countOfPlayers = 8;
	nameOfGame = "Curling";
	season = "Winter";
	field = "Ice";
	tools = "Brush";
	lenghtRoad = 1;
}

TSWCurling::TSWCurling(int lenghtRoad_)
{
	if (lenghtRoad_ < 0)
		throw(1);
	lenghtRoad = lenghtRoad_;
}

TSWCurling::TSWCurling(TSWCurling& obj)
{
	lenghtRoad = obj.GetLenght();
}

TSWCurling::~TSWCurling()
{
}

int TSWCurling::GetLenght()
{
	return lenghtRoad;
}

void TSWCurling::SetLenght()
{
	cin >> lenghtRoad;
	if (lenghtRoad < 0)
		throw(1);
}

ostream& operator <<(ostream& output, TSWCurling& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of play: " << var.nameOfGame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field << " | " << "Tools: " << var.tools << " | "
		<< "Lenght of Road: " << var.lenghtRoad << "\n";
	;
	return output;
}

istream& operator >>(istream& input, TSWCurling& var)
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
	cout << "Tools: ";
	input >> var.tools;
	cout << "Lenght of Road: ";
	input >> var.lenghtRoad;
	if (var.lenghtRoad < 0)
		throw(1);
	return input;
}