#include "stdafx.h"
#include <iostream>
using namespace std;

#define embedded_cpp
//#define pc_cpp
#define pi 3.141952


int main()
{
#ifdef pc_cpp // ������ ������
	cout << "pc" << endl;
#endif

#ifdef embedded_cpp
	cout << "emb" << endl;
#endif
	return 0;
}

