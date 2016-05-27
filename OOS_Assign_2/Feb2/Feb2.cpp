// Feb2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BaseOne.h"
#include "BaseTwo.h"
#include <iostream>

int main()
{
	BaseOne b("gaunine");
	BaseTwo c("cytosine");

	BaseOne d("adenine");

	isPair(b, c);
	isPair(d, c);


	return 0;
}

