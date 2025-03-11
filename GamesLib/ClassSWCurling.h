#pragma once

#include "ClassSWinter.h"

class TSWCurling : public TSWinter
{
protected:
	int lenghtRoad;
public:
	TSWCurling();
	TSWCurling(int lenghtRoad_);
	TSWCurling(TSWCurling& obj);

	virtual ~TSWCurling();

	virtual int GetLenght();
	virtual void SetLenght();

	friend ostream& operator <<(ostream& output, TSWCurling& var);
	friend istream& operator >>(istream& input, TSWCurling& var);
};