#ifndef BMI_H
#define BMI_H

using namespace std;

class BMI
{
private:
	int height;
	int weight;
public:
	BMI(int height, int weight);
	void computeBMI();
	~BMI();
};
#endif