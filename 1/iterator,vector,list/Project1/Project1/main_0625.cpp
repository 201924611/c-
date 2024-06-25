#include<iostream>
#include"CArr.h"

#include <vector>
#include <list>

using namespace std;

class CTest
{
public:
	int	m_i;

public:
	CTest& operator=(const CTest& other)
	{
		m_i = other.m_i;
		return *this;
	}
	
public:

	CTest()
		:m_i(0)
	{

	}
	// 생성자가 하나라도 만들어진게 있으면 기존 생성자가 만들어지지 않는다.
	CTest(const CTest& _other)
		:m_i(_other.m_i)
	{

	}
};

int main()
{

	vector<int>  acc;
	acc.push_back(10);
	acc.push_back(20);

	vector<int>::iterator iter = acc.begin();


	// 밑에 iter 값을 출력할 수 없다.
	// acc에 값을 집어넣으면서 resize가 되어 재할당 되 주소가 바꼇을 것이다.
	// 위에 선언하면안됨
	// *iter;
	


	CArr<int> myvector;

	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);

	CArr<int>::iterator myiter = myvector.begin();

	// *myiter;
	// ++(전위, 후위) --, == , !=
	for (;myiter != myvector.end(); ++myiter)
		{
			cout << *myiter << endl;
		}

	myiter = myvector.begin();

	int iData = *(myiter++);


	CTest t1;
	t1.m_i = 100;

	CTest t2(t1);

	CTest t3 = t1;
	// 복사 생성자 호출

	// vector::erase
	vector<int> vecInt;

	vecInt.push_back(100);
	vecInt.push_back(200);
	vecInt.push_back(300);
	vecInt.push_back(400);

	vector<int>::iterator veciter = vecInt.begin();

	for (;veciter != vecInt.end();) {
		if (1 <= *veciter) {
			veciter = vecInt.erase(veciter);
		}
		else
		{
			++veciter;
		}
	}

	return 0;


}