#pragma once


typedef struct _tagArr
{
	int*	pInt;
	int		iCount;
	int		iMaxCount;
}tArr;


// 단축키 Ctrl + '+', '.'

// 배열 초기화 함수
void InitArr(tArr* _pArr);

// 데이터 추가 함수
void PushBack(tArr* _pArr, int _iData);

// 재할당
void Reallocate(tArr* _pArr); // Reallocate 함수를 사용 못하게 숨길 수도 있음

// 배열 메모리 해제 함수
void ReleaseArr(tArr* _pArr);

