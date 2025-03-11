#pragma once

#include "ClassVGames.h"

class TVPlot : public TVGames
{
protected:
	string styleTipe;
public:
	TVPlot();
	TVPlot(string style_);
	TVPlot(TVPlot& obj);

	virtual ~TVPlot();

	virtual string GetStyle();

	virtual void SetStyle();

	friend ostream& operator <<(ostream& output, TVPlot& var);
	friend istream& operator >>(istream& input, TVPlot& var);
};