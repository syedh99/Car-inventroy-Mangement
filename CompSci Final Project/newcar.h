#pragma once
#include <iostream>
#include "genericcar.h"
#include <string>
using namespace std;

class newCar : public car
{
public:
	newCar();
	newCar(string VIN, string make, string model, string catrgory, double price, string carWarranty);
	string getWarranty(); 
	void setWarranty(string carWarranty);
	void display() const;
protected:
	string warranty;

};
