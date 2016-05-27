#pragma once
#include "Customer.h"
#include <string> 
using namespace std;
class OnlineCustomer : Customer
{

private:
	string email;

public:


	OnlineCustomer(string, string, string);
	void Ondisplay();

	~OnlineCustomer();
};

