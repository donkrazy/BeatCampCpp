#include "stdafx.h"
#include <iostream>
using namespace std;

struct person {
	char  name[10];
	int age;
};

void show(person p) {
	cout << p.name << ", " << p.age << endl;
	//p->name = "dfdfdffffzz";
}
int main()
{
	person p = { "dfdf", 30 };
	show(p);
    return 0;
}

