#pragma once

#include "ClassSGames.h"

class TSWinter : public TSportGames
{
protected:
	string tools;
public:
	TSWinter();
	TSWinter(string tools_);
	TSWinter(TSWinter& obj);

	virtual ~TSWinter();

	virtual string GetTools();
	virtual void SetTools();

	friend ostream& operator <<(ostream& output, TSWinter& var);
	friend istream& operator >>(istream& input, TSWinter& var);
};