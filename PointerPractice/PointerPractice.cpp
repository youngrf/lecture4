// PointerPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int i = 10;
	int *ptr1 = &i;

	cout << i << endl;
	cout << ptr1 << endl;
	cout << &i << endl;
	cout << &ptr1 << endl;

	return 0;
}
