#include <iostream>

#include "Arr.h"
// 변수
// 지역(스택)
// 전역, 정적, 외부(데이터)



// 메모리영역
// 스택
// 데이터
// 코드
// 힙 영역(동적할당)




void Test(int a)
{
	printf("%d\n", a);
}

typedef struct _tagST
{
	int iArr[g_i];
}ST;


int main()
{
	// 메인 함수에서 이쪽 코드까지와야 실행됨
	// (void) malloc(100);
	// 힙 영역에 100바이트를 할당한다
	// 그 이후 포인터 변수에 할당하면 주소를 100바이트의 시작 주소를 넘겨준다.
	// malloc의 반환타입은 void
	//int* pInt = (int*)malloc(100);

	/*
	float* pF = (float*)malloc(4);
	int* pI = (int*)pF;

	*pF = 2.4f;

	int i = *pI;
	*/

	// 동적할당
	// 1. 런타임 중에 대응 가능
	// 2. 사용자가 직접 관리해야함(해제)


	Test(10);

	int iInput = 0;
	scanf_s("d", &iInput);

	int* pInt = nullptr;
	if (100 == iInput)
	{
		pInt = (int*)malloc(100);
	}


	if (nullptr != pInt)
	{
		free(pInt);
	}

	// 가변배열
	// 컴파일 구간에 배열값이 이미 확정되어야한다.(지역변수는)

	int a = 100;

	int iInput = 0;
	scanf_s("%d", &a);

	// 배열 개수를 선언할 때에는 변수를 사용 할 수 없다.
	// int arr[a] = {}
	
	// 객체(Instance)
	// int,
	// int a;
	
	tArr arr;

	tArr arr2;

	tArr arr3;
	
	
	return 0;

}