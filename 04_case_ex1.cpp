#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// switch-case: 값을 기반으로 한 취사 선택
	// switch문 내의 값과 case 문 내의 
	int i = 0;
	switch (i) {
	case 1: // 로직 수행 시 braek 문이 없ㄷ어서
	case 2:  // 로직을 탈출
	case 3: // 
	default:
		break;
	}

	int inputstate;
	cout << "입력하시오" << endl;
	cin >> inputstate;
	switch (inputstate)
	{
	case 1: cout << "ddddd" << endl; break;
	case 2: cout << "ffffff" << endl; break;
	default: cout << "default" << endl; break;
	}

	return 0;
}

