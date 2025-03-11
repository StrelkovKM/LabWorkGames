#include "ClassSWHockey.h"

TSWHockey::TSWHockey() : TSWinter::TSWinter()
{
	countOfPlayers = 12;
	nameOfGame = "Hockey";
	season = "Winter";
	field = "Ice";
	tools = "Hockey stick";
	project = "Project";
}

TSWHockey::TSWHockey(string project_)
{
	project = project_;
}

TSWHockey::TSWHockey(TSWHockey& obj)
{
	project = obj.GetProject();
}

TSWHockey::~TSWHockey()
{ }

string TSWHockey::GetProject()
{
	return project;
}

void TSWHockey::SetProject()
{
	cin >> project;
}

ostream& operator <<(ostream& output, TSWHockey& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of play: " << var.nameOfGame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field << " | " << "Tools: " << var.tools << " | "
		<< "Project: " << var.project << "\n";
		;
	return output;
}

istream& operator >>(istream& input, TSWHockey& var)
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
	cout << "Project: ";
	input >> var.project;
	return input;
}