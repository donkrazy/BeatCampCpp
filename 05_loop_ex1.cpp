#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cout << a << endl;
	a++; //;이후에 값 증가. 후치연산
	++a; //;만나기 전에 값 증가.. 전치연산
	cout << ++a << '/' << a++ << endl;	
	cout << a << '/' << b << endl;
	cout << "#######################" << endl;

	for (int i = 1; i < 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		//printf("\n");
		cout << endl;
	}

	cout << "#######################" << endl;

	cout << "gugudan" << endl;
	for (int gugu = 2; gugu < 10; gugu++) {
		for (int i = 1; i < 10; i++) {
			//printf("%d * %d = %d\n", gugu, i, gugu * i);
			cout << gugu << " * " << i << " = " << i * gugu << endl;
		}
		cout << "-----" << endl;
	}

	return 0;
}

