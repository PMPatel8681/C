#include "stdafx.h"
#include <iostream>
#include "Airplane.h"
#include "Reservation.h"


Reservation::Reservation(string rNum, Airplane tAp, Flight tFp, Passenger tPss)
{
	resNum = rNum;
	ap = tAp;
	fp = tFp;
	pss = tPss;
};

Reservation::Reservation()
{
};

string Reservation::displayInfo() { return "Reservation #: " + resNum + "\n" + ap.displayInfo() 
+ "\n" + fp.displayInfo() + "\n"+ pss.displayInfo(); }

Reservation::~Reservation()
{
}
