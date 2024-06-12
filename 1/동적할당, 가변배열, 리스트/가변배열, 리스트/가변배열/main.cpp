#include <iostream>
#include <time.h>
#include "Arr.h"
#include "LinkedList.h"

void BubbleSort(int * _pArr, int _iCount)
{
	// 데이터가 1개 이하면 정렬하지 않음
	if (_iCount <= 1)
		return;

	// 오름차순 정렬

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

// 함수 포인터 선언
void Test()
{

}

// 데이터 정렬함수
void Sort(tArr* _pArr, void(*st)(int*, int)) 
{
	st(_pArr->pInt, _pArr->iCount);
}


int main()
{
	// 함수 포인터 받는 법
	void(*pfunc)(void) = nullptr;
	pfunc = Test;
	pfunc();
	
	tArr s1 = {};

	InitArr(&s1);

	//난수 랜덤
	srand(time(nullptr));
	
	for (int i = 0; i < 10; ++i)
	{
		int iRand = rand() % 100 + 1;
		PushBack(&s1, iRand);
	}
	sort(&s1, BubbleSort);


	ReleaseArr(&s1);

	// 연결형 리스트


	return 0;

}


// 내일 아침에 할 것
// 1. 가변배열
// 스스로 구현 가능하게 복습할 것

// 2. 가변배열 안에 넣은 데이터 정렬
// - 버블 정렬 만들어 보기


