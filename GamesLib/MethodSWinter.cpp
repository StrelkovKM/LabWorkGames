#include "ClassSWinter.h"

TSWinter::TSWinter() : TSportGames::TSportGames()
{
	tools = "Tools";
}

TSWinter::TSWinter(string tools_)
{
	tools = tools_;
}

TSWinter::TSWinter(TSWinter& obj)
{
	tools = obj.GetTools();
}

TSWinter::~TSWinter()
{

}

string TSWinter::GetTools()
{
	return tools;
}

void TSWinter::SetTools()
{
	cin >> tools;
}

ostream& operator <<(ostream& output, TSWinter& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of play: " << var.nameOfGame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field << " | " << "Tools: " << var.tools << "\n"
		;
	return output;
}

istream& operator >>(istream& input, TSWinter& var)
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
	return input;
}