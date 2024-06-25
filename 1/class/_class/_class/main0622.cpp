#include<iostream>
#include"CArr.h"

#include <vector>
#include <list>

int main()
{
	CArr<int> myvector;

	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);

	CArr<int>::iterator myiter = myvector.begin();

	// *myiter;
}