#include "ParkingTicket.h"
#include "ParkedCar.h"
#include <iostream>
using namespace std;

ParkingTicket::ParkingTicket(ParkedCar car, PoliceOfficer officer, double fine)
{

}


double ParkingTicket::getFine()
{
	return fine;
}

void ParkingTicket::setFine(double fine)
{
	fine = 0;
}

ostream& operator<< (ostream& strm, ParkingTicket& ticket)
{
	strm << 
}

