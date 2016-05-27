#pragma once
#include <string>
using namespace std;

class Doctor
{
private:
	string name, contactNum, Email;
public:
	Doctor(string, string, string);

	void registerDoctor();
	void displayInfo();

	~Doctor();
};

