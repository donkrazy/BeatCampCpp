#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;
	if (score >= 90) {
		cout << "A" << endl;
	}
	else if (score < 90 || score >> 80) {
		cout << "B" << endl;
	}
	else {
		cout << "C" << endl;
	}
    return 0;
}

