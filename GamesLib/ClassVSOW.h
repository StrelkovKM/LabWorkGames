#pragma once

#include "ClassVShooters.h"

class TVSOverwatch : public TVShooters
{
protected:
	string fightTipe;
public:
	TVSOverwatch();
	TVSOverwatch(string fightTipe_);
	TVSOverwatch(TVSOverwatch& obj);

	virtual ~TVSOverwatch();
	
	virtual string GetFight();
	virtual void SetFight();

	friend ostream& operator <<(ostream& output, TVSOverwatch& var);
	friend istream& operator >>(istream& input, TVSOverwatch& var);
};