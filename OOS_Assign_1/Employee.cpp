#include "Employee.h"
#include "Address.h"
#include <iostream>


Employee::Employee()
{
}


Employee::~Employee()
{
}

Employee :: Employee (string stNumber,string stName,string city,string state,
	string zipcode, string enameIn, int idIn) : address( stNumber,  stName, 
	 city,  state,  zipcode  )

{

	ename = enameIn;
	id = idIn;
	
}
void Employee:: display()
{
	cout << " Name: " << "		ID" << "	 Address:"  << endl;
	cout << " -----------------------------------------------------------------" << endl;

	
	cout << ename << "	" << id << "	"  ; address.display(); 
}