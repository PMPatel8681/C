#include "GameRubric.h"
#include<iostream>
using namespace std;

int main()
{
	GameRubric grObj(true,false,true,true,true,true,false,true,false,false, 0);

	if (grObj.retTitlePresent()){ grObj.setScore(1);}
	if (grObj.retObjectiveStated()){ grObj.setScore(1); }
	if (grObj.retGameStartStopPresent()){ grObj.setScore(1); }
	if (grObj.retHelpIncluded()){ grObj.setScore(1); }
	if (grObj.retSoundUsed()){ grObj.setScore(1); }
	if (grObj.retSoundVolumeApproriate()){ grObj.setScore(1); }
	if (grObj.retImageUsed()){ grObj.setScore(1); }
	if (grObj.retGraphicsIncluded()){ grObj.setScore(1); }
	if (grObj.retSpeedApproriate()){ grObj.setScore(1); }
	if (grObj.retActorMovementApproriate()){ grObj.setScore(1); }


	cout << grObj.computeScore() << endl;

	return 0;
}