#include <iostream>
#include "CArr.h"
#include "Arr.h"

class CTest {
private:
	int a;
public:
	CTest() : a(10)
	{

	}
};

template<typename T>
T Add(T a, T b)
{
	return a + b;
}


int main()
{
	// ����ü --> Ŭ����

	// ��ü ���� ��� Ư¡
	// 1. ĸ��ȭ
	// ����� �����ϱ� ���� �ʿ��� ��� ����, ����, ���м�
	// ��� �Լ���

	// 2. ���

	// 3. ������

	// 4. �߻�ȭ

	// ����ü ���� �����迭 --> Ŭ���� ����


	// C++ �����Ҵ� new, delete

	CTest* pTest = new CTest[5];
	delete pTest;

	// CArr ����
	tArr arr = {};
	InitArr(&arr);

	PushBack(&arr, 10);
	PushBack(&arr, 20);
	PushBack(&arr, 30);

	ReleaseArr(&arr);

	CArr<int> carr;
	carr.push_back(3.14f);
	carr.push_back(6.28f);
	carr.push_back(30.444f);

	float fData = carr[1];




	// �Լ� ���ø�
	// �ؿ����� �Լ� ���ø�
	int i = Add(10, 20);
	// �ؿ��� �Լ�
	int i = Add<int>(10, 20);
	Add<int>(100, 200);

	// Ŭ���� ���ø�
	// �����κе� ���� ����� ����


	return 0;
}