#include "stdafx.h"
#include <iostream>
#include "GeneralPrac.h"


GeneralPrac::GeneralPrac(string dName, string dPhone, string dEmail, string pract
	, string addy) : Doctor(dName, dPhone, dEmail)
{
	practice = pract;
	address = addy;
};

void GeneralPrac::displayInfo()
{
	__super::displayInfo();
	cout << "Practice: " << practice << endl;
	cout << "Address: " << address << endl;
}


GeneralPrac::~GeneralPrac()
{
}
