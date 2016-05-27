#ifndef GREENHOUSEEMMISION
#define GREENHOUSEEMMISION
#include <string>

using namespace std;

class greenHouseEmission
{
public:
	virtual void computeEmission() = 0;

	greenHouseEmission();
	~greenHouseEmission();
};
#endif
