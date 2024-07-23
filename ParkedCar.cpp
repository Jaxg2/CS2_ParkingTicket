#include "ParkedCar.h"
#include <iostream>
using namespace std;


ParkedCar::ParkedCar(string make, string model, string color, string license, int min)
{

}

string ParkedCar::getMake()
{
	return make;
}

string ParkedCar::getModel()
{
	return model;
}

string ParkedCar::getColor()
{
	return color;
}

string ParkedCar::getLicense()
{
	return license;
}

int ParkedCar::getMin()
{
	return min;
}

void ParkedCar::setMin()
{
	min = 0;
}