#pragma once
class BaseTwo; // Forward Declaration
#include<string>
using namespace std;



class BaseOne
{
	bool friend isPair(BaseOne, BaseTwo);

private:
	string bOne;
	

public:
	BaseOne(string);
	~BaseOne();
};

