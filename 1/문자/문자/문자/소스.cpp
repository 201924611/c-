#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include "문자열길이.h"

// 메모리 영역
// 1. 스택
// 2. 데이터
// 3. 힙
// 4. ROM(코드)


// 코드 영역
// 문자

// 함수 오버로딩
// 함수 오버라이딩

void Test(int a)
{
	

}

void Test(float a)
{


}



int main() {

	{
		wchar_t wc = 49;
		short s = 49;

		char c = 1;
		c = '1';

		wc = 459;
		"4 59";
		// 공백도 문자열이 있다.


		int i = 0;
	}

	{

	}

	{
		// 문자
		// char(1), wchar(2)

		char szChar[10] = "abcdef";
		wchar_t szWchar[10] = L"abcdef";
		const wchar_t* pchar = L"abcdef";
		// 주소를 받아오는 것 주소에 있는 데이터는 코드 영역에 저장되있어서 수정 불가
		// 배열은 문자열코드를 복사한 배열공간에서 바꾸는 것으로 수정 가능, 정상작동 
		// 강제로 타입변환해서 컴파일은 가능하게는 할 수는 있는데, 실행 단계에서 런타임오류 발생


		short arrShort[10] = { 97, 98, 99, 100, 101, 102 };

		unsigned char szTest[10] = "abc한글";
		wchar_t szTestW[10] = L"abc한글";


		
	}

	
	wchar_t szName[10] = L"Raimond";

	int ilenw = wcslen(szName);
	int ilen = GetLength(szName);
	
	// 문자열 이어 붙이기
	Test(10);
	Test(4.15f);

	wchar_t szString[100] = L"abc";

	//wcscat_s(szString, 100, L"def");
	StrCat(szString, 100, L"asdfqwdef");

	// wcscmp()
	// 저울 같은 친구
	// 왼쪽 오른쪽에 있을 떄 사전 순으로 먼저 나오는 쪽
	// 즉 오른쪽이 사전 순 먼저 나오면 1
	// 왼쪽이 사전 순으로 먼저 나오면 -1
	// 같으면 0

	int _iRet = wcscmp(L"abc", L"abc");
	int a = wcequal(L"abc", L"ab");


	// 구조체와 포인터



	

	return 0;
}
