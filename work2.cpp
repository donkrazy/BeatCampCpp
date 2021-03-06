#include "stdafx.h"
#include <iostream>
using namespace std;

void swap1(int num1, int num2)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap2(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap3(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}


int main()
{
	int a, b;
	a = 100;
	b = 2000;
	swap1(a, b);
	cout << "swap1: " << a << "/" << b << endl;

	a = 100;
	b = 2200;
	swap2(&a, &b);
	cout << "swap2: " << a << "/" << b << endl;


	a = 100;
	b = 2200;
	swap3(a, b);
	cout << "swap3: " << a << "/" << b << endl;

	return 0;
}

