#pragma once

#include "ClassVGames.h"

class TVShooters : public TVGames
{
protected:
	string shootTipe;
public:
	TVShooters();
	TVShooters(string shootTipe_);
	TVShooters(TVShooters& obj);
	virtual ~TVShooters();

	virtual string GetShoot();

	virtual void SetShoot();

	friend ostream& operator <<(ostream& output, TVShooters& var);
	friend istream& operator >>(istream& input, TVShooters& var);
};