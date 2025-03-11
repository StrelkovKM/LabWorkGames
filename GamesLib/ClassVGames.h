#pragma once
#include <iostream>
#include "ClassGames.h"

class TVGames : public TGames
{
protected:
	string platform;
	string engine;
	int faceTipe;
public:
	TVGames();
	TVGames(string platform_, string engine_, int faceTipe_);
	TVGames(TVGames& obj);

	virtual ~TVGames();

	virtual string GetPlatform();
	virtual string GetEngine();
	virtual int GetFace();

	virtual void SetPlatform();
	virtual void SetEngine();
	virtual void SetFace();

	friend ostream& operator <<(ostream& output, TVGames& var);
	friend istream& operator >>(istream& input, TVGames& var);
};