#include "stdafx.h"
#include "Airplane.h"


Airplane::Airplane(string mod, string seatT, string seatN)
{
	model = mod;
	seatType = seatT;
	seatNum = seatN;
};

Airplane::Airplane()
{
};


string Airplane::getModel() { return model; }
string Airplane::getSeatType() { return seatType; }
string Airplane::getSeatNum() { return seatNum; }
string Airplane::displayInfo() { return "Airplane Model: " + model + "\n" + "Seat Type: " + seatType + "\n" + "Seat #: " + seatNum + "\n"; }

void Airplane::setModel(string temp) { model = temp; }
void Airplane::setSeatType(string temp) { seatType = temp; }
void Airplane::setSeatNum(string temp) { seatNum = temp; }

Airplane::~Airplane()
{
}
