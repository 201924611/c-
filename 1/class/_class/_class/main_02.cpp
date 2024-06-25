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
	// 구조체 --> 클래스

	// 객체 지향 언어 특징
	// 1. 캡슐화
	// 기능을 수행하기 위해 필요한 멤버 선언, 묶음, 은닉성
	// 멤버 함수들

	// 2. 상속

	// 3. 다형성

	// 4. 추상화

	// 구조체 버전 가변배열 --> 클래스 버전


	// C++ 동적할당 new, delete

	CTest* pTest = new CTest[5];
	delete pTest;

	// CArr 예시
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




	// 함수 템플릿
	// 밑에꺼는 함수 템플릿
	int i = Add(10, 20);
	// 밑에께 함수
	int i = Add<int>(10, 20);
	Add<int>(100, 200);

	// 클래스 템플릿
	// 구현부분도 전부 헤더에 구현


	return 0;
}