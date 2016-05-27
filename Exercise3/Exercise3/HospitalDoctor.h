#pragma once
#include "Doctor.h"
#include <string>

class HospitalDoctor : Doctor
{
private:
	string staffNum, pagerNum;
public:
	HospitalDoctor(string, string, string, string, string);
	void displayInfo();
	~HospitalDoctor();
};

