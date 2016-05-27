#pragma once
#include<string>

using namespace std;
class Address
{

private:

	string stNumber, stName, city, state, zipcode;

	
public:

	Address(string, string, string, string, string);
	void display();
	Address();
	~Address();






};

	

