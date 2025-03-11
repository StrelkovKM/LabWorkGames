#pragma once

#include "ClassSSummer.h"

class TSSVoleyball : public TSSummer
{
protected:
	string area;
public:
	TSSVoleyball();
	TSSVoleyball(string area_);
	TSSVoleyball(TSSVoleyball& obj);

	virtual ~TSSVoleyball();

	virtual string GetArea();
	virtual void SetArea();

	friend ostream& operator <<(ostream& output, TSSVoleyball& var);
	friend istream& operator >>(istream& input, TSSVoleyball& var);
};