#include "HouseholdVehicle.h"
#include <iostream>


HouseholdVehicle::HouseholdVehicle(){}

void HouseholdVehicle::computeEmission()
{
	cout << "Annual Household Gas emission: " << (gasolineConsumption*gasolineWaste) + (dieselConsumption*dieselWaste) << " lbs!" << endl;
}


HouseholdVehicle::~HouseholdVehicle(){}
