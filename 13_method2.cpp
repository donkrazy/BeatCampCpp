#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int a = 4, int b = 3) {
	return a + b;
}


int main()
{
	cout << add(1, 3) << endl;
	cout << add(NULL, NULL) << endl;
	cout << add(3) << endl;
    return 0;
}