#include "stdafx.h"
#include <iostream>
using namespace std;

class DrinkBox
{
private:
	char* name;
	int price;
	int quantity;
public:
	DrinkBox(const char* name, int price, int quantity);
	~DrinkBox();
	void show_info();
	void set_info(const char* name, int price, int quantity);
	int total();
};

//DrinkBox::DrinkBox(char* name, int price, int quantity) : name(name), price(price), quantity(quantity), {}

DrinkBox::DrinkBox(const char* _name, int _price, int _quantity)
{
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
	price = _price;
	quantity = _quantity;
}

DrinkBox::~DrinkBox() 
{
	if(name != NULL) delete[] name;
}

void DrinkBox::show_info()
{
	cout << name << "/" << price << "원" << "/" << quantity << "개" << endl;
}

void DrinkBox::set_info(const char* _name, int _price, int _quantity)
{
	if (name != NULL) delete[] name;
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
	price = _price;
	quantity = _quantity;
}

int DrinkBox::total() 
{
	return quantity;
}

int main()
{
	DrinkBox *coke = new DrinkBox("815", 500, 3);
	coke->show_info();
	coke->set_info("815", 600, 4);
	coke->show_info();

	DrinkBox *tea = new DrinkBox("녹차", 1500, 1);
	tea->show_info();

	cout << coke->total() << "/" << tea->total() << endl;
	return 0;
}
