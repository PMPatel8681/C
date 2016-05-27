#include "stdafx.h"
#include <iostream>
#include "Doctor.h"


Doctor::Doctor(string dName, string phone, string eleMail)
{
	name = dName;
	contactNum = phone;
	Email = eleMail;
};

void Doctor::registerDoctor()
{
	cout << "Enter Doc's name: ";
		cin >> name;

	cout << "Enter Doc's Phone #: ";
		cin >> contactNum;

	cout << "Enter Doc's E-Mail: ";
		cin >> Email;
}



void Doctor::displayInfo()
{
	cout << "Doctor name: " << name << endl;
	cout << "Doctor phone number: " << contactNum << endl;
	cout << "Doctor email: " << Email << endl;

}



Doctor::~Doctor()
{
}
