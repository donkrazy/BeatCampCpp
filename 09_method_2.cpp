#include "stdafx.h"
#include <iostream>
using namespace std;

void myFunc();

int main()
{
	int x = 5;
	cout << x << endl;
	myFunc();
    return 0;
}

void myFunc() {
	int x = 8;
	cout << x << endl;
	{
		cout << x << endl;
		int x = 9;
		cout << x << endl;
	}
	cout << x << endl;
}

