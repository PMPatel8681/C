#pragma once
#include "greenHouseEmission.h"

class WasteDisposal : public greenHouseEmission
{
private:
	int const monthlyWaste = 373;
	int const monthsInYear = 12;
	double const numOfHouseholds = 115227000;

public:

	void computeEmission();

	WasteDisposal();
	~WasteDisposal();
};

