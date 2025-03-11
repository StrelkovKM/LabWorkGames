#pragma once

#include "ClassSGames.h"

class TSSummer : public TSportGames
{
protected:
	string locate;
public:
	TSSummer();
	TSSummer(string locate_);
	TSSummer(TSSummer& obj);

	virtual ~TSSummer();

	virtual string GetLocate();
	virtual void SetLocate();

	friend ostream& operator <<(ostream& output, TSSummer& var);
	friend istream& operator >>(istream& input, TSSummer& var);
};
