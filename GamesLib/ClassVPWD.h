#pragma once

#include "ClassVPlot.h"

class TVPWatchDogs : public TVPlot
{
protected:
	int chapter;
public:
	TVPWatchDogs();
	TVPWatchDogs(int chapter_);
	TVPWatchDogs(TVPWatchDogs& obj);

	virtual ~TVPWatchDogs();

	virtual int GetChapter();
	virtual void SetChapter();

	friend ostream& operator <<(ostream& output, TVPWatchDogs& var);
	friend istream& operator >>(istream& input, TVPWatchDogs& var);
};