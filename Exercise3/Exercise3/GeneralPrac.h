#pragma once
#include "Doctor.h"

class GeneralPrac : Doctor
{
private:
	string practice, address;
public:
	GeneralPrac(string, string, string, string, string);
	void displayInfo();
	~GeneralPrac();
};

