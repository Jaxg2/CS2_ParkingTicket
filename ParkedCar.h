#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <iostream>
#include "Time.h"
using namespace std;

class ParkedCar
{
private:
	string make;
	string model;
	string color;
	string license;
	int min;
public:
	ParkedCar(string make, string model, string color, string license, int min);
	string getMake();
	string getModel();
	string getColor();
	string getLicense();
	int getMin();
	void setMin();
};

#endif