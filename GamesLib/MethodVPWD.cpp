#include "ClassVPWD.h"


TVPWatchDogs::TVPWatchDogs() : TVPlot::TVPlot()
{
	nameOfGame = "WatchDogs";
	countOfPlayers = 4;
	platform = "Cross";
	engine = "UE4";
	styleTipe = "Cyber";
	faceTipe = 3;
	chapter = 1;
}

TVPWatchDogs::TVPWatchDogs(int chapter_)
{
	if (chapter_ < 0)
		throw(1);
	chapter = chapter_;
}

TVPWatchDogs::TVPWatchDogs(TVPWatchDogs& obj)
{
	chapter = obj.GetChapter();
}

TVPWatchDogs::~TVPWatchDogs()
{

}

int TVPWatchDogs::GetChapter()
{
	return chapter;
}

void TVPWatchDogs::SetChapter()
{
	cin >> chapter;
	if (chapter < 0)
		throw(1);
}

ostream& operator <<(ostream& output, TVPWatchDogs& var)
{
	output
		<< "Count of players: " << var.countOfPlayers << " | "
		<< "Name of game: " << var.nameOfGame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Style: " << var.styleTipe << " | "
		<< "Face tipe: " << var.faceTipe << " | " << "Chapter: " << var.chapter
		<< "\n";
	return output;
}

istream& operator >>(istream& input, TVPWatchDogs& var)
{
	cout << "Name of Game: ";
	input >> var.nameOfGame;
	cout << "Count of Players: ";
	input >> var.countOfPlayers;
	if (var.countOfPlayers < 0)
		throw(1);
	cout << "Platform for Game: ";
	input >> var.platform;
	cout << "Engine for Game: ";
	input >> var.engine;
	cout << "Game style: ";
	input >> var.styleTipe;
	cout << "Face tipe: ";
	input >> var.faceTipe;
	if (var.faceTipe < 0)
		throw(1);
	cout << "Chapter: ";
	input >> var.chapter;
	if (var.chapter < 0)
		throw(1);
	return input;
}