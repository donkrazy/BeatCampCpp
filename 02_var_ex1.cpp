#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int numdata = 32767;
	int ret;
	ret = numdata % 10;
	numdata %= 10;
	cout << numdata;
	cout << false;
    return 0;
}

