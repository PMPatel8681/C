#include "Address.h"
#include <iostream>


Address::Address()
{
}

Address::Address(string stNumberIn,
	string stNameIn,
	string cityIn,
	string stateIn,
	string zipcodeIn)
{

	stNumber = stNumberIn;
	stName = stNameIn;
	city = cityIn;
	state = stateIn;
	zipcode = zipcodeIn;

}
void Address::display()
{
	cout << " " << stNumber << " " <<  stName
		<<", " <<city<< " " << state <<" " << zipcode << endl;
}

Address::~Address()
{
}
