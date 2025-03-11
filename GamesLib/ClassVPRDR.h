#pragma once

#include "ClassVPlot.h"

class TVPRedDead : public TVPlot
{
protected:
	string pickHero;
public:
	TVPRedDead();
	TVPRedDead(string pickHero_);
	TVPRedDead(TVPRedDead& obj);
	virtual ~TVPRedDead();

	virtual string GetHero();
	virtual void SetHero();

	friend ostream& operator <<(ostream& output, TVPRedDead& var);
	friend istream& operator >>(istream& input, TVPRedDead& var);
};