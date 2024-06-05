#include <stdio.h>


// 변수의 종류
// 1. 지역변수
// 2. 전역변수 
// 3. 정적변수(static)
// 4. 외부변수(extern)



// 메모리 영역
// 1. 스택영역
// 2. 데이터 영역(위에 2, 3, 4)
// 3. 읽기 전용(코드, ROM)
// 4. 힙 영역



// 전역 변수
int g_i = 0;  // Data 영역

// Data 영역 특징
// 프로그램 시작 시 생성
// 프로그램 종료 시 해제

#include "fun.h"


void Test()
{
	int i = 0;
	++i;
}


int main()
{
	Test();
	Test();
	Test();

	int data = Add(10, 20);

	g_i = 0;

	return 0;

}

