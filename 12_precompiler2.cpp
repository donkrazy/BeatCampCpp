#include "stdafx.h"
#include <iostream>
using namespace std;

#include "12_myheader.h"
#include "12_myheader.h"
#include "12_myheader.h"

int a = 3;

int main()
{
	cout << a << endl;
	cout << add(54345, 3423423) << endl;
	cout << a << endl;

	int b = 1;
#ifdef b
	b = 3;
#endif
	cout << b << endl;
    return 0;
}