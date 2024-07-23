#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
#include "ParkedCar.h"
#include "PoliceOfficer.h"
class ParkingTicket
{
private:
	double fine;
public:
	ParkingTicket(ParkedCar car, PoliceOfficer officer, double fine);
	double getFine();
	void setFine(double fine);
};

#endif