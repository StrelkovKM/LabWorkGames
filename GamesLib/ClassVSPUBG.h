#pragma once

#include "ClassVShooters.h"

class TVSPUBG : public TVShooters
{
protected:
	string teamTipe;
public:
	TVSPUBG();
	TVSPUBG(string fightTipe_);
	TVSPUBG(TVSPUBG& obj);

	virtual ~TVSPUBG();

	virtual string GetTeam();
	virtual void SetTeam();

	friend ostream& operator <<(ostream& output, TVSPUBG& var);
	friend istream& operator >>(istream& input, TVSPUBG& var);
};