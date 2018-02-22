#include "stdafx.h"
#include <iostream>
#include <stddef.h>
using namespace std;


int main()
{
		int *pt = (int*)malloc(2345);
			pt[3] = 3;
				*(pt + 1) = 2;
					cout << pt[1] << "/" << pt[3] << endl;
						cout << sizeof(pt) << endl;
							return 0;
}
