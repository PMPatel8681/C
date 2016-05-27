
#include <iostream>   
#include <algorithm>    
#include "BMI.h"      

using namespace std;


int main() {
	int g;

	BMI p1(10, 100);
	BMI p2(10, 1000);
	BMI p3(100, 10000);
	BMI p4(100, 1000);

	cout << "BMI Calculator!" << endl;
	cout << "Person 1 has BMI of ";
	p1.computeBMI();
	cout << endl;

	cout << "Person 2 has BMI of ";
	p2.computeBMI();
	cout << endl;

	cout << "Person 3 has BMI of ";
	p3.computeBMI();
	cout << endl;

	cout << "Person 4 has BMI of ";
	p4.computeBMI();
	cout << endl;

	cout << "Enter 3 to exit: ";
	cin >> g;
	return 0;
}
