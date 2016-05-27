#pragma once
#include <string>


using namespace std;

class Airplane
{
private:
	string model, seatType, seatNum;
public:
	Airplane();
	Airplane(string, string, string);

	string getModel();
	string getSeatType();
	string getSeatNum();
	string displayInfo();

	void setModel(string);
	void setSeatType(string);
	void setSeatNum(string);

	~Airplane();
};

