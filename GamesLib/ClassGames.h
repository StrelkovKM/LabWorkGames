#pragma once

#include <iostream>

using namespace std;

class TGames
{
protected:
  int countOfPlayers;
  string nameOfGame;
public:
  TGames();
  ~TGames();
  TGames(int countOfPlayers_, string nameOfGame_);
  TGames(TGames& obj);

  virtual int GetCount();
  virtual string GetName();
  
  virtual void SetCount();
  virtual void SetName();

  friend ostream& operator <<(ostream& output, TGames& var);
  friend istream& operator >>(istream& input, TGames& var);
};
