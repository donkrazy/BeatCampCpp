#include "stdafx.h"
#include <iostream>
using namespace std;

enum Fruit {a, b, c, d, e};

int main()
{
	Fruit t = Fruit::e;
	switch (t) 
	{
	case a:
		cout << "a" << endl; break;
	case b:
		cout << "b" << endl; break;
	default:
		cout << "ddd" << endl; break;
	}
	cout << a << endl;
	int a = 4;
	cout << a << endl;
	cout << b << endl;

	int x = 3;
	cout << &x << endl;

	int* px = &x;
	*px = 21233;
	cout << x << endl;
	bool a = 2;

    return 0;
}

