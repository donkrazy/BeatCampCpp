#include "stdafx.h"
#include <iostream>
using namespace std;

# define my_add(x, y) x + y
# define my_mul(x, y) int(x) * int(2 * y)

int add(int x, int y) {
	return x + y;
}


int add(int x, int y, int z) {
	return x + y + z;
}

int add(float x, float y) {
	return x + y;
}

int main()
{
	int ret;
	ret = my_add(111, 2222);
	cout << ret << endl;
	string a = "Dfdfdffd";
	cout << my_mul(3.1, 6.4);
    return 0;
}

