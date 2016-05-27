#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;
int main()
{
	Employee em1("430", "E Main Ave", "Tville", "North Carolina", "28681", " Pinal Patel", 25654);

	em1.display();
	cout << endl << endl;
	cin.get();

	return 0;
}



