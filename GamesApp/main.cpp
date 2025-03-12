#include <iostream>
#include "ClassGames.h"
#include "ClassVGames.h"
#include "ClassVShooters.h"
#include "ClassVSOW.h"
#include "ClassVSPUBG.h"
#include "ClassVPlot.h"
#include "ClassVPWD.h"
#include "ClassVPRDR.h"
#include "ClassSGames.h"
#include "ClassSSummer.h"
#include "ClassSWinter.h"
#include "ClassSWCurling.h"
#include "ClassSWHockey.h"
#include "ClassSSFootball.h"
#include "ClassSSVoleyball.h"
void print(TGames& obj)
{
	cout << obj.GetName() << "\n";
}

int main()
{
	TSSVoleyball Vollay;
	TVPRedDead RDR;
	TGames Game;
	cout << Game.GetName() << "\n";
	cout << Vollay.GetName() << "\n";
	print(RDR);
	return 0;
}
