#pragma once
#include <iostream>
#include <vector>
#include "oldcar.h"
#include <string>
using namespace std;

double oldCar::getMileage()
{
	return mileage;
}
void oldCar::setMileage(double carMileage)
{
	mileage = carMileage;
}
oldCar::oldCar()
{

}
oldCar::oldCar(string VIN, string model, string make, string category,double price, double carMileage):car(VIN, model, make,category, price)
{
	mileage = carMileage;
}
void oldCar::display() const
{
	car::display();
	cout << "Mileage:  " << mileage << endl;
}