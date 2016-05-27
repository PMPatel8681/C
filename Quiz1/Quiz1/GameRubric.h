#pragma once
class GameRubric
{
private:
	bool titlePresent, objectiveStated, gameStartStopPresent, helpIncluded, soundUsed, soundVolumeApproriate, imageUsed, graphicsIncluded, speedApproriate,
		actorMovementApproriate;
	int score;
public:
	GameRubric();
	GameRubric(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int);
	~GameRubric();

	bool retTitlePresent();
	bool retObjectiveStated();
	bool retGameStartStopPresent();
	bool retHelpIncluded();
	bool retSoundUsed();
	bool retSoundVolumeApproriate();
	bool retImageUsed();
	bool retGraphicsIncluded();
	bool retSpeedApproriate();
	bool retActorMovementApproriate();
	int computeScore();

	void setTitlePresent(bool);
	void setObjectiveStated(bool);
	void setGameStartStopPresent(bool);
	void setHelpIncluded(bool);
	void setSoundUsed(bool);
	void setSoundVolumeApproriate(bool);
	void setImageUsed(bool);
	void setGraphicsIncluded(bool);
	void setSpeedApproriate(bool);
	void setActorMovementApproriate(bool);
	void setScore(int);

};

