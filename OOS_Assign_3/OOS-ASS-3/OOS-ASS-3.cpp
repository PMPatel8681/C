// OOS-ASS-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Airplane.h"
#include "Flight.h"
#include "Passenger.h"
#include "Reservation.h"


int main()
{
	Airplane plane("Boeing", "Plush", "2B");
	Flight flight("2345", "Jan 23", "LAX", "NYC");
	Passenger passn("Pinal", "Patel", "12/30/1994");

	Reservation res1("24",plane, flight, passn);

	cout << res1.displayInfo() << endl;

    return 0;
}

