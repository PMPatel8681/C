#include "BMI.h"
#include <functional>
#include <iostream>

using namespace std;

BMI::BMI(int heightIn, int weightIn)
{
	height = heightIn;
	weight = weightIn;
}

void BMI::computeBMI()
{
	auto lambda1 = [this](int h)-> function<int(int)>{return [=](int w) {return w / h; }; };
	auto lambda2 = [this](const function<int(int)>& f, int bmi){ return f(bmi) * 703; };
	auto mass = lambda2(lambda1(height), weight);
	cout << mass;
}

BMI::~BMI()
{
}
