#pragma once
#include <iostream>
#include <vector>
#include "genericcar.h"


car::car(string carVIN = " ", string carMake = " ", string carModel = " ", string carCategory = " ", double carPrice = 0)
{
	VIN = carVIN;
	make = carMake;
	model = carModel;
	category = carCategory;
	price = carPrice;
}
car::car()
{
	string VIN = " ";
	string make = " ";
	string model = " ";
	string category = " ";
	double price = 0;
}
string car::getVIN()
{
	return VIN;
}
string car::getMake()
{
	return make;
}
string car::getModel()
{
	return model;
}
string car::getCategory()
{
	return category;
}
double car::getPrice()
{
	return price;
}
void car::setVIN(string VIN)
{
	this->VIN = VIN;
}
void car::setMake(string make)
{
	this->make = make;
}
void car::setModel(string model)
{
	this->model = model;
}
void car::setCategory(string category)
{
	this->category = category;
}
void car::setPrice(double price)
{
	this->price = price;
}
void car::display() const
{
	cout << endl << endl;
	cout << "VIN:      " << VIN << endl;
	cout << "Make:     " << make << endl;
	cout << "Model:    " << model << endl;
	cout << "Category: " << category << endl;
	cout << "Price:    " << "$" << price << endl;
 }