#include <iostream>
#include <vector>
#include "greenHouseEmission.h"
#include "WasteDisposal.h"
#include "HouseholdVehicle.h"
#include "HouseholdElectricity.h"
#include "HouseholdGas.h"
#include <memory>

using namespace std;

int main()
{
	vector<unique_ptr<greenHouseEmission>> EmissionVector;


	EmissionVector.push_back(unique_ptr<greenHouseEmission>(new HouseholdVehicle));
	EmissionVector.push_back(unique_ptr<greenHouseEmission>(new WasteDisposal));
	EmissionVector.push_back(unique_ptr<greenHouseEmission>(new HouseholdGas));
	EmissionVector.push_back(unique_ptr<greenHouseEmission>(new HouseholdElectricity));
	

	

	for (size_t i = 0; i < EmissionVector.size(); i++)
	{
		cout.precision(15);
		EmissionVector[i]->computeEmission();

	}




	cin.get();


	return 0;
}