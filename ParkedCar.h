#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <iostream>
using namespace std;

class ParkedCar
{
private:
	string make;
	string model;
	string color;
	int license;
	int min;
public:
	string getMake();
	string getModel();
	string getColor();
	int getLicense();
	int getMin();
	void setMake();
	void setModel();
	void setColor();
	void setLicense();
	void setMin();
};

#endif