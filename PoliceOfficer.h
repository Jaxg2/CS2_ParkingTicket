#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include <iostream>
#include "Time.h"
using namespace std;

class PoliceOfficer
{
	string name;
	int badge;
	static double calcFine(Time min);
public:
	string getName();
	int getBadge();
	void examine();
	void makeTicket();
};

#endif