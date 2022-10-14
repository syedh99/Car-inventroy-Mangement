#pragma once
#include <iostream>
#include <vector>
using namespace std;

class car 
{
public:
	string getMake(); //manufactuer
	string getModel(); // type of car ex: camry, carolla
	string getCategory(); // use or new
	string getVIN(); // vin Num
	double getPrice(); // price
	car();
	car(string, string, string, string, double);
	void setMake(string);
	void setModel(string);
	void setCategory(string);
	void setVIN(string);
	void setPrice(double);
	void display() const;
protected:
	string VIN;
	string make;
	string model;
	string category;
	double price;
};
