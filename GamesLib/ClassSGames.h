#pragma once

#include "ClassGames.h"

class TSportGames : public TGames
{
protected:
	string season;
	string field;
public:
	TSportGames();
	TSportGames(string season_, string field_);
	TSportGames(TSportGames& obj);

	virtual ~TSportGames();

	virtual string GetSeason();
	virtual string GetField();

	virtual void SetSeason();
	virtual void SetField();

	friend ostream& operator <<(ostream& output, TSportGames& var);
	friend istream& operator >>(istream& input, TSportGames& var);
};