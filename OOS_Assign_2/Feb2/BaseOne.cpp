#include "stdafx.h"
#include "BaseOne.h"
#include <iostream>
#include "BaseTwo.h"
BaseOne::BaseOne(string baseOne)
{
	bOne = baseOne;
}

bool isPair(BaseOne first, BaseTwo second)
{
	bool AT = (first.bOne == "thymine" && second.bTwo == "adenine") || (first.bOne == "adenine" && second.bTwo == "thymine");
	bool GC = (first.bOne == "gaunine" && second.bTwo == "cytosine") || (first.bOne == "cytosine" && second.bTwo == "gaunine");

	if (AT)
	{
		cout << "MATCH!" << endl;
		return true;
	}
	else if (GC)
	{
		cout << "MATCH!" << endl;
		return true;
	}
	else{
		cout << "NO MATCH!" << endl;
		return false;
	}
}

BaseOne::~BaseOne()
{
}
