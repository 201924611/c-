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
	// �����ڰ� �ϳ��� ��������� ������ ���� �����ڰ� ��������� �ʴ´�.
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


	// �ؿ� iter ���� ����� �� ����.
	// acc�� ���� ��������鼭 resize�� �Ǿ� ���Ҵ� �� �ּҰ� �ٲ��� ���̴�.
	// ���� �����ϸ�ȵ�
	// *iter;
	


	CArr<int> myvector;

	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);

	CArr<int>::iterator myiter = myvector.begin();

	// *myiter;
	// ++(����, ����) --, == , !=
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
	// ���� ������ ȣ��

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