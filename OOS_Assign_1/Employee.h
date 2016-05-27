#pragma once
#include<string>
#include "Address.h"
using namespace std;

class Employee
{

private:
	Address address;
	string ename; 
	int id; 
	
public:

	Employee(string, string, string, string , string, string, int);


	Employee();
	~Employee();
	void display();
};

