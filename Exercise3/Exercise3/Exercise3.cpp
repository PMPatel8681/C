// Exercise3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HospitalDoctor.h"
#include <iostream>

int main()
{
	HospitalDoctor doccy("Some Doc","1-800-CALL-DOCT","theBestDoc@docMail.com", "000546", "321654987000");

	doccy.displayInfo();


	cin.get();
	
	return 0;
}

