#ifndef HOUSEHOLDELECTRICTY
#define HOUSEHOLDELECTRICTY
#include "greenHouseEmission.h"

class HouseholdElectricity : public greenHouseEmission
{
private:
	double const houseHoldElectricityFactor = 1500; // lbs of CO2 per MWh
	double const avgAnnualConsumption = 10.932; // MWh per household
	double const numOfHouseholds = 115227000.00;

public:

	void computeEmission();
	HouseholdElectricity();
	~HouseholdElectricity();
};
#endif

