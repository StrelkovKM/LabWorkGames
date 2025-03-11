#pragma once

#include "ClassSSummer.h"

class TSSFootball : public TSSummer
{
protected:
	string format;
public:
	TSSFootball();
	TSSFootball(string format_);
	TSSFootball(TSSFootball& obj);

	virtual ~TSSFootball();

	virtual string GetFormat();
	virtual void SetFormat();

	friend ostream& operator <<(ostream& output, TSSFootball& var);
	friend istream& operator >>(istream& input, TSSFootball& var);
};