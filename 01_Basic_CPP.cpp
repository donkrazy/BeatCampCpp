#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// c++의 출력 메서드
	std::cout << "dddd" << std::endl;
	// << >> 데이터의 흐름 방향
	cout << "dddd\n";
	cout << "dddd" << endl;
	// cin >> a;
	cout << "aaa\n\t" << "BB\t\"B" << 111 << 222 << "fff" << endl;
	printf("-------------------------------------");
	printf("%s라라라라%d\n", "dfdfdf", 10000);
	int inputdata;
	cout << "입력하세요" << endl;
	cin >> inputdata;
	cout << inputdata << endl;

	cout << "int" << sizeof(int)
		<< "float" << sizeof(float)
		<< "long long" << sizeof(long long)
		<< "float" << sizeof(float)
		<< endl;
	cerr << "빼애애애애애액" << endl;
	long long z = 12309812308123;

	int vv = 32768;
	while (vv > 0) {
		cout << "자리수" << vv % 10 << endl;
		vv = vv / 10;
	}


	return 0;
}

