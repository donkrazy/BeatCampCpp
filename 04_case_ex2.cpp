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
	else if (score < 90 || score > 80) {
		cout << "B" << endl;
	}
	else {
		cout << "C" << endl;
	}


	printf("======================\n");
	int score2;
	cin >> score2;
	int result = score2 / 10;

	switch (result) {
	case 10:
	case 9:
		cout << "A";
		break;
	case 8:
		cout << "B";
		break;
	default:
		cout << "C";
		break;
	}

	return 0;
}