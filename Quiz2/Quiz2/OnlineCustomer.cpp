#include "OnlineCustomer.h"
#include <iostream>

OnlineCustomer::OnlineCustomer(string firstName, string lastName, string emailIn) : Customer(firstName, lastName)
{
	email = emailIn;

}

void OnlineCustomer::Ondisplay()

{
	Cusdisplay();
	cout << "Email : " << email;
}

OnlineCustomer::~OnlineCustomer()
{
}
