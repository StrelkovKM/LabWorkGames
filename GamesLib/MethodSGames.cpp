
#include "ClassSGames.h"

TSportGames::TSportGames() : TGames::TGames()
{
	season = "Season";
	field = "Field";
}

TSportGames::TSportGames(string season_, string field_)
{
	season = season_;
	field = field_;
}

TSportGames::TSportGames(TSportGames& obj)
{
	season = obj.GetSeason();
	field = obj.GetField();
}

TSportGames::~TSportGames()
{}



string TSportGames::GetSeason()
{
 	return season;
}

string TSportGames::GetField()
{
	return field;
}


void TSportGames::SetSeason()
{
	cin >> season;
}

void TSportGames::SetField()
{
	cin >> field;
}

ostream& operator <<(ostream& output, TSportGames& var)
{
	output
		<<  "Count of players: " << var.countOfPlayers << " | "
		<< "Name of play: " << var.nameOfGame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field
		;

	return output;
}

istream& operator >>(istream& input, TSportGames& var)
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
	return input;
}