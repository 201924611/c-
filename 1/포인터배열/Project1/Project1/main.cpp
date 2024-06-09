#include <stdlib.h>
#include <stdio.h>

int main()
{
	// 포인터 변수
	// 자료형 변수명
	int* pInt = nullptr;

	// 주소를 저장

	// 포인터 변수의 크기는 8 바이트다.(64비트)
	// pInt는 int*변수이기 때문에, 가리키는 곳을 int로 해석한다.
	// 따라서 주소값을 1 증가하는 의미는 다음 int 위치로 접근하기 위해 sizeof(int) 단위로 증가


	char* pChar = nullptr;
	short* pShort = nullptr;


	// 포인터와 배열
	// 배열의 특징
	// 1. 메모리가 연속적인 구조이다.
	// 2. 배열의 이름은 배열의 시작 주소이다.

	int iArr[10] = {};

	// int 단위로 접근
	*(iArr + 0) = 10; //iArr[0] = 10
	*(iArr + 1) = 10; //iArr[1] = 10

	// 포인터 이해 확인 문제
	// 문제 1.
	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	int* pI = (int*)sArr;

	int iData = *((short*)(pI + 2));

	printf("1번 문제 정답 : %d\n", iData);

	// 문제 2.
	char cArr[2] = { 1 , 1 };

	short* pS = (short*)cArr;

	iData = *pS;

	printf("2번 문제 정답 : %d\n", iData);

	int a;

	// scanf_s에서 주소를 요구함, 주소를 받아가서 값을 넣어줌
	scanf_s("%d", &a);

	return 0;
}