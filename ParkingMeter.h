#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include "Time.h"

class ParkingMeter
{
private: 
	Time min_purchased;
public:
	void setMinPurchased(Time min);
	Time getMinPurchased();
};

#endif