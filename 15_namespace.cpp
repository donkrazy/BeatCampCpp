#include "stdafx.h"
#include <iostream>


namespace stdd {
	int price = 3000;
	int getprice() {
		return 3000;
	}
}

int main()
{
	using namespace stdd;
	using namespace std;
	std::cout << stdd::price << std::endl;
	std::cout << getprice() << std::endl;
	cout << getprice();
    return 0;
}

