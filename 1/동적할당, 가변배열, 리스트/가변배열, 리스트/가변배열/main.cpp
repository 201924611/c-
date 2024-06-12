#include <iostream>
#include <time.h>
#include "Arr.h"
#include "LinkedList.h"

void BubbleSort(int * _pArr, int _iCount)
{
	// �����Ͱ� 1�� ���ϸ� �������� ����
	if (_iCount <= 1)
		return;

	// �������� ����

	while (true)
	{
		bool bFinish = true;
		int iLoop =  _iCount - 1;
		for (int i = 0; i < _iCount; ++i)
		{
			if (_pArr[i] > _pArr[i + 1])
			{
				int iTemp = _pArr[i];
				_pArr[i] = _pArr[i + 1];
				_pArr[i + 1] = iTemp;

				bFinish = false;
			}
		}

		if (bFinish)
			break;
	}
}

// �Լ� ������ ����
void Test()
{

}

// ������ �����Լ�
void Sort(tArr* _pArr, void(*st)(int*, int)) 
{
	st(_pArr->pInt, _pArr->iCount);
}


int main()
{
	// �Լ� ������ �޴� ��
	void(*pfunc)(void) = nullptr;
	pfunc = Test;
	pfunc();
	
	tArr s1 = {};

	InitArr(&s1);

	//���� ����
	srand(time(nullptr));
	
	for (int i = 0; i < 10; ++i)
	{
		int iRand = rand() % 100 + 1;
		PushBack(&s1, iRand);
	}
	sort(&s1, BubbleSort);


	ReleaseArr(&s1);

	// ������ ����Ʈ


	return 0;

}


// ���� ��ħ�� �� ��
// 1. �����迭
// ������ ���� �����ϰ� ������ ��

// 2. �����迭 �ȿ� ���� ������ ����
// - ���� ���� ����� ����


