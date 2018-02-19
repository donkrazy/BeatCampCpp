#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int x, int y);
void swap2(int x, int y);

int main()
{
	int x = 5, y = 10;
	cout << x << "," << y << endl;
	swap(x, y);
	cout << x << "," << y << endl;

	cout << "#####################" << endl;

	swap(x, y);
	cout << x << "," << y << endl;


}

void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << x << "," << y << endl;
}

void swap2(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}