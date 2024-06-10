#include <stdlib.h>
#include <stdio.h>

void Output(const int* pi)
{
	int i = *pi;
	int* pint = (int*)pi;
	*pint = 1000;
}

// 포인터의 특징 : 원본 데이터가 어떤 자료인지는 무관하다.


int main()
{
	// 1. const
	const int i = 100;

	// const 와 포인터
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// ============
	// const 포인터
	// ============
	const int* pConstInt = &a;
	//*pConstInt = 100
	int b = 0;
	pConstInt = &b;

	// ============
	// 포인터 const
	// ============
	int* const pIntConst = &a;

	*pIntConst = 500;
	//pIntConst = &b;


	// 초기화 시 가리킨 대상만 가리킴, 가리키는 원본 수정 불가
	const int* const pConstIntConst = nullptr;


	// const위치랑 포인트 위치로 const 포인터인걸 알수 있다.
	int const* p = &a;

	{
		int a = 0;
		const int* pInt = &a;

		//*pInt = 100;
		//a = 100;

		int* p = &a;
		*p = 100;



	}

	a = 100;
	Output(&a);

	// void
	void* pVoid = nullptr;
	float* pFloat = nullptr;
	// float이나 int등등 선언하면 float으로 읽게다는 소리
	// void로 선언하면 어떤 자료형이든 다 받을 수 있다.

	{
		int a = 0;
		float f = 0.f;
		double d = 0;
		long long ll = 0;

		pVoid = &a;
		pVoid = &f;
		pVoid = &d;
		pVoid = &ll;

	}





	return 0;
}


// 단축키
// Ctrl + Shift + Space