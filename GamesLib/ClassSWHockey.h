#pragma once

#include "ClassSWinter.h"

class TSWHockey : public TSWinter
{
protected:
	string project;
public:
	TSWHockey();
	TSWHockey(string project_);
	TSWHockey(TSWHockey& obj);

	virtual ~TSWHockey();

	virtual string GetProject();
	virtual void SetProject();

	friend ostream& operator <<(ostream& output, TSWHockey& var);
	friend istream& operator >>(istream& input, TSWHockey& var);
}; 