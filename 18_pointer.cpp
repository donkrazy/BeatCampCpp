#include "stdafx.h"
#include <iostream>
using namespace std;

struct A {
	int a;
	int b;
};

int main()
{
	int *p = (int*)1000;
	cout << p << endl;
	cout << &p << endl;
	char f = (char)100000;
	char a = '1';
	a++;
	cout << a << endl;
	float z = (float)134;
	cout << ++z << endl;
	cout << ++f << endl;
	cout << &f << endl;

	struct A pp;
	pp.a = 1;
	pp.b = 2;
	
	struct A qq;
	qq = pp;
	
	cout << pp.a << "/" << qq.a << endl;
	pp.a = 33333;
	cout << pp.a << "/" << qq.a << endl;

	return 0;
}