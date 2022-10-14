#pragma once
#include <iostream>
#include "genericcar.h"
using namespace std;

class oldCar : public car
{
public:
	oldCar();
	oldCar(string VIN, string make, string model, string category,double price, double mileage);
	void setMileage(double carMileage);
	double getMileage();
	void display() const;
protected:
	double mileage;
};
