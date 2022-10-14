#pragma once
#include <iostream>
#include <vector>
#include "newcar.h"
#include <string>
using namespace std;
string newCar::getWarranty()
{
	return warranty;
}
void newCar::setWarranty(string carWarranty)
{
	warranty = carWarranty;
}
newCar::newCar()
{

}
newCar::newCar(string VIN, string model, string make, string category, double price, string carWarranty):car(VIN, model, make, category, price)
{
	warranty = carWarranty;
}
void newCar::display() const
{
	car::display();
	cout << "Warranty: " << warranty << endl;
}