#pragma once
#include <string>

using namespace std;
class Flight
{
private:
	string flightNum, depDate, depPort, destPort;
public:
	Flight();
	Flight(string, string, string, string);

	string getFlightNum();
	string getDepDate();
	string getDepPort();
	string getDestPort();
	string displayInfo();

	void setFlightNum(string);
	void setDepDate(string);
	void setDepPort(string);
	void setDestPort(string);

	~Flight();
};

