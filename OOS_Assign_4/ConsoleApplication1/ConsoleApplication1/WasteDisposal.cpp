#include "WasteDisposal.h"
#include <iostream>


WasteDisposal::WasteDisposal(){}

void WasteDisposal::computeEmission()
{
	cout << "Annual Household Waste emission : " << (monthlyWaste*monthsInYear*numOfHouseholds) << " lbs!" << endl;
}

WasteDisposal::~WasteDisposal(){}


