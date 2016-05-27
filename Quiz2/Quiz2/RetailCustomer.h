#pragma once
#include "Customer.h"
#include "OnlineCustomer.h"
#include <string> 
using namespace std;

class RetailCustomer : Customer
{
private:
	int StoreId;


public:
	RetailCustomer(string, string, int);
	void Retaildisply();
	~RetailCustomer();
};

