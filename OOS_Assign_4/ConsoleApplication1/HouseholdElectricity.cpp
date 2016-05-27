#include "HouseholdElectricity.h"
#include <iostream>


HouseholdElectricity::HouseholdElectricity(){}

void HouseholdElectricity::computeEmission()
{
	cout << "Annual Household Electricity emission: " << (avgAnnualConsumption*numOfHouseholds*houseHoldElectricityFactor) << " lbs!" << endl;
}

HouseholdElectricity::~HouseholdElectricity(){}
