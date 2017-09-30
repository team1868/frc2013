#ifndef LINEARVICTOR_H_
#define LINEARVICTOR_H_

#include "WPILib.h"

class LinearVictor
{
public:
	LinearVictor(int portNum);
	virtual ~LinearVictor();
	
	double CalculateLinearValue(double desiredSpeed);
	
	void Set(double speed);
	
private:
	Victor *victor;
};

#endif /*LINEARVICTOR_H_*/
