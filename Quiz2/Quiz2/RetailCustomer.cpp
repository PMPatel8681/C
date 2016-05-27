#include "RetailCustomer.h"
#include "Customer.h"
#include "OnlineCustomer.h"
#include <iostream>

RetailCustomer::RetailCustomer(string firstName, string lastName, int StoreIdIn) : Customer(firstName, lastName)
{
	StoreId = StoreIdIn;
}

void RetailCustomer::Retaildisply()
{
	//Cusdisplay();
	cout << "Retail Store id: " << StoreId << endl;
}

RetailCustomer::~RetailCustomer()
{
}
