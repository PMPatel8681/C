#pragma once
#include <string>

using namespace std;

class Passenger
{
private:
	string firstName, lastName, dob;
public:
	Passenger();
	Passenger(string, string, string);

	string getFirstName();
	string getLastName();
	string getDob();
	string displayInfo();


	void setFirstName(string);
	void setLastName(string);
	void setDob(string);



	~Passenger();
};

