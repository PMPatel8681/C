#include "stdafx.h"
#include "Passenger.h"


Passenger::Passenger(string fName, string lName, string birth)
{
	firstName = fName;
	lastName = lName;
	dob = birth;
};

Passenger::Passenger()
{
};

string Passenger::getFirstName() { return firstName; }
string Passenger::getLastName() { return lastName; }
string Passenger::getDob() { return dob; }
string Passenger::displayInfo() { return "First Name: "+ firstName + "\n" + "Last Name: " + lastName + "\n" + "DOB: " + dob + "\n"; }

void Passenger::setFirstName(string temp) { firstName = temp; }
void Passenger::setLastName(string temp) { lastName = temp; }
void Passenger::setDob(string temp) { dob = temp; }


Passenger::~Passenger()
{
}
