// lab_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"

int main()
{
	NumberList a;
	a.Init();
	a.Add(2);
	a.Add(5);
	a.Print();
	system("pause");
}
