#pragma once

class BaseOne; // Forward Declaration
#include<string>
using namespace std;

class BaseTwo
{
	bool friend isPair(BaseOne, BaseTwo);
private:
	string bTwo;
public:
	BaseTwo(string);
	~BaseTwo();
};

