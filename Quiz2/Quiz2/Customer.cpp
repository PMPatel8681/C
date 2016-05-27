#include "Customer.h"
#include <iostream>

Customer::Customer(string Fname, string Lname)
{
	firstName = Fname;
	lastName = Lname;

}

void Customer::Cusdisplay()
{
	cout << "FirstName : " << firstName << endl;
	cout << "LastName : " << lastName << endl;
}



Customer::~Customer()
{
}
