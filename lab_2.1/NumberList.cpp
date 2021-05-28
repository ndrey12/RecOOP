#include "NumberList.h"
#include <iostream>
#include <algorithm>
void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	if (this->count == 10) return false;
	this->numbers[this->count] = x;
	this->count++;
	return true;
}

void NumberList::Sort()
{
	std::sort(this->numbers, this->numbers + this->count);
}
void NumberList::Print()
{
	for (int i = 0; i < this->count; i++)
		std::cout << this->numbers[i] << " ";
	std::cout << "\n";
}