#include <iostream>
#include <vector>
#include "windows.h"
#include "newcar.h"
#include "oldcar.h"
#include <ostream>
#include <algorithm>
#include <string>
using namespace std;

// sell new car by VIn 
string sellNewByVin(vector<newCar> sellVIN, string newVIN)
{
	for (int i = 0; i < sellVIN.size(); i++)
	{
		if ((sellVIN[i]).getVIN() == newVIN)
		{
			
			cout << "Information of car being sold: " << endl;
			sellVIN[i].display();
			sellVIN.erase(sellVIN.begin() + i);
			cout << "Car sold successfully " << endl;
		}
	}
	return " ";
}
// sell old car by VIN
string sellOldByVin(vector<oldCar> sellVIN1, string oldVIN)
{
	for (int i = 0; i < sellVIN1.size(); i++)
	{
		if ((sellVIN1[i]).getVIN() == oldVIN)
		{
		
			cout << "Information of car being sold: " << endl;
			sellVIN1[i].display();
			sellVIN1.erase(sellVIN1.begin() + i);
			cout << "Car sold successfully " << endl;

		}
	}
	return " ";
}
// search by new vin
bool searchNewByVIN(vector<newCar> vin1, string newVin)
{
	for (int i = 0; i < vin1.size(); i++)
	{
		if (vin1[i].getVIN() == newVin)
		{
			vin1[i].display();
			cout << " " << endl;
			return true;
		}
	
	}
	return false;

}
// search by VIn for old
bool searchOldByVIN(vector<oldCar> vin2, string oldVin)
{
	for (int i = 0; i < vin2.size(); i++)
	{
		if (vin2[i].getVIN() == oldVin)
		{
			vin2[i].display();
			cout << " " << endl;
			return true;
		}
	}
	return false;
}
// search algorithm for  new car maker
bool searchNewMaker(vector<newCar> v1, string value)
{
	for (int i = 0; i < v1.size(); i++)
	{
		if(v1[i].getMake() == value)
		{
			v1[i].display();
			cout << " " << endl;
			return true;
		}
	}
	return false;
}
// search by old maker
bool searchOldMaker(vector<oldCar> v2, string val)
{
	for (int i = 0; i < v2.size(); i++)
	{
		if (v2[i].getMake() == val)
		{
			v2[i].display();
			cout << " " << endl;
			return true;
		}
	}
	return false;
}
// search by new model
bool searchNewModel(vector<newCar> v3, string val2)
{
	for (int i = 0; i < v3.size(); i++)
	{
		if (v3[i].getModel() == val2)
		{
			v3[i].display();
			cout << " " << endl;
			return true;
		}
	}
	return false;
}
bool searchOldModel(vector<oldCar> old2, string val3)
{
	for (int i = 0; i < old2.size(); i++)
	{
		if (old2[i].getModel() == val3)
		{
			old2[i].display();
			cout << " " << endl;
			return true;
		}
	}
	return false;
}
// new car search
string searchCategoryNew(vector<newCar> new1) // search new cars 
{
	for (int i = 0; i < new1.size(); i++)
	{
		new1[i].display();
	}
	return " ";
	
}
// old car search
string searchCategoryOld(vector<oldCar> old1) // search old cars
{
	for (int i = 0; i < old1.size(); i++)
	{
		old1[i].display();
	}
	return " ";
}

// main 
int main() 
{
	// list of new cars
	newCar n1("1FTYR14V4XPB41241", "Toyota", "Camry", "New",12000, "Yes");
	newCar n2("19XFB2F50CE307036","Hyundai", "Sonata", "New", 11000,"Yes");
	newCar n3("2G1WW12M4V9105306", "Ford", "Fusion", "New",15000, "Yes");
	newCar n4("1N4AL3AP2DC205080", "Chevy", "Malibu", "New", 13000, "Yes");
	newCar n5("3D7KS29A37G823205", "Chrysler", "300", "New", 20000, "Yes");
	vector<newCar> newCars = { n1,n2,n3,n4,n5 };
	// list of old cars
	oldCar o1("WBA5A7C5XED698620", "Toyota", "Carolla", "Old", 4000,90000);
	oldCar o2("2C3CDXCT9FH751056", "Ford", "Fiesta", "Old", 2500,32000);
	oldCar o3("1FMCU04112KC07293", "Lincoln", "Navigator", "Old",9000, 120000);
	oldCar o4("KMHDH4AE8DU567580", "Nissan", "Ultima", "Old",4500, 2000);
	oldCar o5("1G1YY34U355144073", "Honda", "Accord", "Old", 5000,200000);
	vector<oldCar> oldCars = { o1,o2,o3,o4, o5 };
	// list of total cars

	// vector <car> totalList;

	int option = -1;

		while (option != 5)
		{
			cout << "Make sure first letter of every word is capital " << endl;
			cout << "Hello employee, choose an option (input the number) " << endl;
			cout << "1-Search Inventory " << endl;
			cout << "2-Sell/Lease cars " << endl;
			cout << "3-Return a leased car " << endl;
			cout << "4-Add cars to inventory " << endl;
			cout << "5-Exit " << endl;
			cout << " " << endl;
			cout << "Option ";
			cin >> option;
			if (option == 1)
			{
				int inventory;
				cout << "Search inventory by inputting a number: " << endl;
				cout << "1-Make " << endl;
				cout << "2-Model " << endl;
				cout << "3-Category(old / new): " << endl;
				cout << " " << endl;
				cin >> inventory;
				// Search section
				if (inventory == 1)
				{
					// search by make
					string age_1;
					cout << "Now searching by make " << endl;
					cout << "Enter if you want to narrow by new or old cars: ";
					cin >> age_1;
					if (age_1 == "New" || age_1 == "new")
					{
						string make_1;
						cout << "Enter make of car(ex: Toyota): ";
						cin >> make_1;
						if (searchNewMaker(newCars, make_1) == true)
						{
							cout << endl;
						}
						else if (!cin.good())
						{
							cin.clear();
							cin.ignore();
							cout << "Invalid Input " << endl;
							cout << " " << endl;
						}
						else
						{
							cout << "Invalid Input or car does not exist " << endl;
							cout << " " << endl;
						}
						
					}
					else if(age_1 == "Old" || age_1 == "old")
					{
						string make_1;
						cout << "Enter make of car(ex: Toyota): ";
						cin >> make_1;
						if (searchOldMaker(oldCars, make_1) == true)
						{
							cout << endl;
						}
						else if (!cin.good())
						{
							cin.clear();
							cin.ignore();
							cout << "Invalid Input " << endl;
							cout << " " << endl;
						}
						else
						{
							cout << "Invalid Input or car does not exist " << endl;
							cout << " " << endl;
						}
					}
				}
				// search by model
				else if (inventory == 2)
				{
					string age_2;
					cout << "Now searching by Model " << endl;
					cout << "Enter if you want to narrow by new or old cars: ";
					cin >> age_2;
					if (age_2 == "old" || age_2 == "Old")
					{
						string model_1;
						cout << "Enter make of car(ex: Carolla, Explorer): ";
						cin >> model_1;
						if (searchOldModel(oldCars, model_1) == true)
						{
							cout << endl;
						}
						else if (!cin.good())
						{
							cin.clear();
							cin.ignore();
							cout << "Invalid Input " << endl;
							cout << " " << endl;
						}
						else
						{
							cout << "Invalid Input or car does not exist " << endl;
							cout << " " << endl;
						}
					}
					else if (age_2 == "New" || age_2 == "new")
					{
						string model_1;
						cout << "Enter make of car(ex: Carolla, Explorer): ";
						cin >> model_1;
						if (searchNewModel(newCars, model_1) == true)
						{
							cout << endl;
						}
						else if (!cin.good())
						{
							cin.clear();
							cin.ignore();
							cout << "Invalid Input " << endl;
							cout << " " << endl;
						}
						else
						{
							cout << "Invalid Input or car does not exist " << endl;
							cout << " " << endl;
						}
					}
					else if (!cin.good())
					{
						cin.clear();
						cin.ignore();
						cout << "Invalid Input " << endl;
						cout << " " << endl;
					}
					else 
					{
						cout << "Invalid Input " << endl;
						cout << " " << endl;
					}
				}
				// search by category
				else if (inventory == 3)
				{
					string cat_1;
					cout << "Now searching by Category " << endl;
					cout << "Enter Category (Old or New): ";
					cin >> cat_1;
					if (cat_1 == "Old" || cat_1 == "old")
					{
						searchCategoryOld(oldCars);
						cout << " " << endl;
						cout << "End of car list " << endl;
						cout << " " << endl;
					}
					else if (cat_1 == "New" || cat_1 == "new")
					{
						searchCategoryNew(newCars);
						cout << " " << endl;
						cout << "End of car list " << endl;
						cout << " " << endl;
					}
					else if (!cin.good())
					{
						cin.clear();
						cin.ignore();
						cout << "Invalid Input " << endl;
						cout << " " << endl;
					}
					else
					{
						cout << "Invalid Input " << endl;
						cout << " " << endl;
					}
				}
				else if (!cin.good())
				{
					cin.clear();
					cin.ignore();
					cout << "Invalid Input " << endl;
					cout << " " << endl;
				}
				else 
				{
					cout << "Invalid Input " << endl;
					cout << " " << endl;
				}

			}
			// Sell or Lease a car section
			else if (option == 2)
			{
				int deal;
				cout << "Would you like to sell or lease " << endl;
				cout << "Enter 1 for sale, 2 for lease: ";
				cin >> deal;
				if (deal == 1)
				{
					string type;
					cout << "Are you selling a new or old car?: ";
					cin >> type;
					if (type == "New" || type == "new")
					{
						string vinNum;
						for (int i = 0; i < newCars.size(); i++)
						{
							(newCars[i]).display();

						}
						cout << " " << endl;
						cout << "Enter VIN of vehicle(17 Characters): ";
						cin >> vinNum;
						if (vinNum.length() == 17)
						{
							sellNewByVin(newCars, vinNum);
							cout << " " << endl;
						}
						else
						{
							cout << "Incorrect number of characters " << endl;
							cout << " " << endl;
						}

					}
					else if (type == "Old" || type == "old")
					{
						string vinNum1;
						for (int i = 0; i < oldCars.size(); i++)
						{
							(oldCars[i]).display();

						}
						cout << " " << endl;
						cout << "Enter VIN of car(17 characters): ";
						cin >> vinNum1;
						if (vinNum1.length() == 17)
						{
							sellOldByVin(oldCars, vinNum1);
							cout << " " << endl;
						}
						else
						{
							cout << "Incorrect number of characters " << endl;
							cout << " " << endl;
						}
					}
					else if (!cin.good())
					{
						cin.clear();
						cin.ignore();
						cout << "Invalid Input " << endl;
						cout << " " << endl;
					}
					else 
					{
						cout << "Invalid Input " << endl;
						cout << " " << endl;
					}
				}
				else if (!cin.good())
				{
					cin.clear();
					cin.ignore();
					cout << "Invalid Input " << endl;
					cout << " " << endl;
				}
				// lease car
				else if (deal == 2)
				{
					string vinNewCar;
					cout << "Now leasing a car " << endl;
					for (int i = 0; i < newCars.size(); i++)
					{
						(newCars[i]).display();
					}
					cout << " " << endl;
					cout << "Enter VIN of car(17 characters): ";
					cin >> vinNewCar;
					if (vinNewCar.length() == 17)
					{
						for (int i = 0; i < newCars.size(); i++)
						{
							if ((newCars[i]).getVIN() == vinNewCar)
							{
								cout << "Information of car being leased: " << endl;
								(newCars[i].display());
								newCars.erase(newCars.begin() + i);
								cout << "Car leased successfully " << endl;
								cout << " " << endl;
							}
						}
						cout << " " << endl;
					}
					else
					{
						cout << "Incorrect number of characters " << endl;
						cout << " " << endl;
					}
				}
				else
				{
					cout << "Invalid Input " << endl;
					cout << " " << endl;
				}
			}
			//Return a leased car
			else if (option == 3)
			{
				cout << "Now returning car " << endl;
				string new_vin, new_make, new_model, new_cat;
				int new_price, new_mileage;
				cout << "Enter VIN(17 characters): ";
				cin >> new_vin;
				cout << "Enter Make: ";
				cin >> new_make;
				cout << "Enter Model: ";
				cin >> new_model;
				cout << "Enter 'Old': ";
				cin >> new_cat;
				cout << "Enter price: ";
				cin >> new_price;
				cout << "Enter mileage: ";
				cin >> new_mileage;
				oldCar o7(new_vin, new_make, new_model, new_cat, new_price, new_mileage);
				oldCars.push_back(o7);
				
				for (int i = 0; i < oldCars.size(); i++)
				{
					(oldCars[i]).display();
				}
				cout << "Car successfully Returned " << endl;
				cout << " " << endl;
			}
			else if (option == 4)
			{
				string Add_car;
				cout << "Now adding car to inventory " << endl;
				cout << "Enter New to add new car or Old to add old car: ";
				cin >> Add_car;
				if (Add_car == "New")
				{
					string new_vin, new_make, new_model, new_warranty, new_cat;
					int new_price;
					cout << "Enter VIN(17 characters): ";
					cin >> new_vin;
					if (searchNewByVIN(newCars, new_vin) == true)
					{
						cout << "Car already exists " << endl;
						cout << " " << endl;
					}
					else if (new_vin.length() != 17)
					{
						cout << "Invalid number of characters " << endl;
						cout << " " << endl;
					}
					else 
					{
						cout << "Enter Make: ";
						cin >> new_make;
						cout << "Enter Model: ";
						cin >> new_model;
						cout << "Enter Category(new or old): ";
						cin >> new_cat;
						cout << "Enter price: ";
						cin >> new_price;
						cout << "Enter warranty: ";
						cin >> new_warranty;
						newCar n6(new_vin, new_make, new_model, new_cat, new_price, new_warranty);
						newCars.push_back(n6);
						cout << "Car successfully added " << endl;
						for (int i = 0; i < newCars.size(); i++)
						{
							(newCars[i]).display();

						}
					}
				}
				else if (Add_car == "Old")
				{
					string new_vin, new_make, new_model, new_cat;
					int new_price, new_mileage;
					cout << "Enter VIN(17 characters): ";
					cin >> new_vin;
	
					if (searchOldByVIN(oldCars, new_vin) == true)
					{
						cout << "Car already exists " << endl;
						cout << " " << endl;
					}
					else if (new_vin.length() != 17)
					{
						cout << "Invalid number of characters " << endl;
						cout << " " << endl;
					}
					else 
					{
						cout << "Enter Make: ";
						cin >> new_make;
						cout << "Enter Model: ";
						cin >> new_model;
						cout << "Enter Category(New or Old): ";
						cin >> new_cat;
						cout << "Enter price: ";
						cin >> new_price;
						cout << "Enter mileage: ";
						cin >> new_mileage;
						oldCar o6(new_vin, new_make, new_model, new_cat, new_price, new_mileage);
						oldCars.push_back(o6);
						cout << "Car successfully added " << endl;
						for (int i = 0; i < oldCars.size(); i++)
						{
							(oldCars[i]).display();
						}
					}
				}
				else if (!cin.good())
				{
					cin.clear();
					cin.ignore();
					cout << "Invalid Input " << endl;
					cout << " " << endl;
				}
				else
				{
					cout << "Invalid Input " << endl;
					cout << " " << endl;
				}

			}
			else if(option == 5)
			{
				cout << " " << endl;
				cout << "End Program " << endl;
				return 0;
			}
			else if (!cin.good())
			{
				cin.clear();
				cin.ignore();
				cout << "Invalid Input " << endl;
				cout << " " << endl;
			}
		/*	else (option != 1 && option != 2 && option != 3 && option != 4 && option != 5);
			{
				cout << "Invalid Input " << endl;
				cout << " " << endl;
			}*/
		}
	
		system("pause");
		return(0);
}

