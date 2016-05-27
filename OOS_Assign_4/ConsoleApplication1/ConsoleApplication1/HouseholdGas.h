#ifndef HOUSEHOLDGAS
#define HOUSEHOLDGAS
#include "greenHouseEmission.h"


class HouseholdGas : public greenHouseEmission
{
private:
	double const naturalGasFactor = .12;
	double const annualConsumption = 201974025.97; // in gallons!

public:
	void computeEmission();
	HouseholdGas();
	~HouseholdGas();
};
#endif

