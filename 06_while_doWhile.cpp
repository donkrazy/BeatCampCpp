#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	
	do {
		cout << "입력하세요: ";
		cin >> i;
		if (i > 10000) break;
	} while (true);
    return 0;
}

