#include "GameRubric.h"


GameRubric::GameRubric(bool title, bool objective, bool startStop, bool help, bool sound, 
	bool volume, bool image, bool graphics, bool speed, bool actorMovement, int Gscore )
{
	titlePresent = title;
	objectiveStated = objective;
	gameStartStopPresent = startStop;
	helpIncluded = help;
	soundUsed = sound;
	soundVolumeApproriate = volume;
	imageUsed = image;
	graphicsIncluded = graphics;
	speedApproriate = speed;
	actorMovementApproriate = actorMovement;
	score = Gscore;
};

GameRubric::GameRubric()
{
}

GameRubric::~GameRubric()
{
}

bool GameRubric::retTitlePresent(){ return titlePresent;}
bool GameRubric::retObjectiveStated(){ return objectiveStated; }
bool GameRubric::retGameStartStopPresent(){ return gameStartStopPresent; }
bool GameRubric::retHelpIncluded(){ return helpIncluded; }
bool GameRubric::retSoundUsed(){ return soundUsed; }
bool GameRubric::retSoundVolumeApproriate(){ return soundVolumeApproriate; }
bool GameRubric::retImageUsed(){ return imageUsed; }
bool GameRubric::retGraphicsIncluded(){ return graphicsIncluded; }
bool GameRubric::retSpeedApproriate(){ return speedApproriate; }
bool GameRubric::retActorMovementApproriate(){ return actorMovementApproriate; }
int GameRubric::computeScore(){ return score; }

void GameRubric::setTitlePresent(bool temp){ titlePresent = temp; }
void GameRubric::setObjectiveStated(bool temp){ objectiveStated = temp; }
void GameRubric::setGameStartStopPresent(bool temp){ gameStartStopPresent = temp; }
void GameRubric::setHelpIncluded(bool temp){ helpIncluded = temp; }
void GameRubric::setSoundUsed(bool temp){ soundUsed = temp; }
void GameRubric::setSoundVolumeApproriate(bool temp){ soundVolumeApproriate = temp; }
void GameRubric::setImageUsed(bool temp){ imageUsed = temp; }
void GameRubric::setGraphicsIncluded(bool temp){ graphicsIncluded = temp; }
void GameRubric::setSpeedApproriate(bool temp){ speedApproriate = temp; }
void GameRubric::setActorMovementApproriate(bool temp){ actorMovementApproriate = temp; }
void GameRubric::setScore(int temp){ score += temp; }