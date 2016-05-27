#include "stdafx.h"
#include "Flight.h"


Flight::Flight(string fNum, string dDate, string dPort, string tPort)
{
	flightNum = fNum;
	depDate = dDate;
	depPort = dPort;
	destPort = tPort;
};

Flight::Flight()
{
};

string Flight::getFlightNum() { return flightNum; }
string Flight::getDepDate() { return depDate; }
string Flight::getDepPort() { return depDate; }
string Flight::getDestPort() { return destPort; }
string Flight::displayInfo() {
	return "Flight #: " + flightNum + "\n" + "Departure Date: "
		+ depDate + "\n" + "Departure Port: " + depPort + "\n" +"Destination Port: " + destPort + "\n";
}

void Flight::setFlightNum(string temp) { flightNum = temp; }
void Flight::setDepDate(string temp) { depDate = temp; }
void Flight::setDepPort(string temp) { depDate = temp; }
void Flight::setDestPort(string temp) { destPort = temp; }

Flight::~Flight()
{
}
