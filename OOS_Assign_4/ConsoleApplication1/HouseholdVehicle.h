#pragma once
#include "greenHouseEmission.h"


class HouseholdVehicle : public greenHouseEmission
{
private:
	double const gasolineWaste = 19.37;  // lbs/CO2/gallon
	double const dieselWaste = 22.23;

	double const gasolineConsumption = 136000000000.00;  // annual consumption in gallons
	double const dieselConsumption = 35000000000.00;

public:

	void computeEmission();
	HouseholdVehicle();
	~HouseholdVehicle();
};

