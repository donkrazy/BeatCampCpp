#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int age;
	age = 15;
	if ((age > 10) && age < 20) {
		cout << "teenager" << endl;
	}
	// block: 한줄을 희생해서 임시로 사용할 처리공간을 만든다.
	// 해당 block의 끝까지 로직이 수행되면 처리공간이 파기된다
	{
		cout << age << "는 청소년" << endl;
		int num_temp = 486;
		cout << "컴퓨타" << num_temp << endl;
	}
	// cout << num_temp << endl;

	int input_num = 0;
	cout << "숫자를 입력하세요:";
	cin >> input_num;
	//input_num << cin;
	cout << input_num << endl;
	if (input_num % 2 == 0) cout << "짝수" << endl;
	else cout << "홀수" << endl;
	
	// 띠요옹
	if (true)
		;
	else
		;
	int a, b;
	if (a = b) {}

    return 0;
}

