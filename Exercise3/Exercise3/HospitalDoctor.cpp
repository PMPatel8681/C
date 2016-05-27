#include "stdafx.h"
#include <iostream>
#include <string>
#include "HospitalDoctor.h"

using namespace std;


HospitalDoctor::HospitalDoctor(string tName, string tPhone, string tEmail,
	string tStaffNum, string tPagerNum) : Doctor(tName, tPhone, tEmail)
{
	staffNum = tStaffNum;
	pagerNum = tPagerNum;
}

void HospitalDoctor::displayInfo()
{
	
	__super::displayInfo();
	cout << "Staff #: " << staffNum << endl;
	cout << "Pager #: " << pagerNum << endl;

}

HospitalDoctor::~HospitalDoctor()
{
}
