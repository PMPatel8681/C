#include "Customer.h"
#include "OnlineCustomer.h"
#include "RetailCustomer.h"
#include <iostream>
int main()
{
	RetailCustomer cs(" David", " Allen", 12);
	OnlineCustomer oc("Princess", "Avery", " deannJam@gmail.com");
	cs.Retaildisply();
	oc.Ondisplay();

	cin.get();
	return 0;

}