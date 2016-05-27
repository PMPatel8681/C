#include "HouseholdGas.h"
#include <iostream>



HouseholdGas::HouseholdGas(){}

void HouseholdGas::computeEmission()
{
	cout << "Annual Household Waste emission: "  << (naturalGasFactor*annualConsumption) << " lbs!" << endl;
}

HouseholdGas::~HouseholdGas(){}
