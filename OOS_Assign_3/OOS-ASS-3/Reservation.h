#pragma once
#include <string>
#include "Airplane.h"
#include "Flight.h"
#include "Passenger.h"

using namespace std;

class Reservation
{
	string resNum;
	Airplane ap;
	Flight fp;
	Passenger pss;

public:
	Reservation();
	Reservation(string, Airplane, Flight, Passenger);
	string displayInfo();
	~Reservation();
};

