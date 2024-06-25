#include <iostream>


struct tMy
{

};


class CMy
{
	// 접근 제한 지정자
	// private, protected(상속), public

private:
	int m_i;
	float m_f;

public:
	void SetInt(int i)
	{
		this->m_i = i;
	}

	// 대입 연산자
	CMy& operator =(const CMy& _Other)
	{
		m_i = _Other.m_i;
		m_f = _Other.m_f;

		return *this;

		// 반환 값이 있어야 c1 = c2 = c3;에서
		// c1 = 이렇게 남지 않고
		// c1 = *this 값 이렇게 남는다.
	}

	CMy& operator + (const CMy& _Other)
	{
		
	}




public:
	// 생성자랑 소멸자는 반드시 존재해야 함

	// 생성자
	// 이니셜라이져
	CMy()
		: m_i(100)
		, m_f(0.f)
	{
	}

	// 소멸자
	~CMy()
	{

	}

};




int main()
{
	// c++ 클래스 특징
	// 접근제한 지정자
	// 클래스 내의 멤버변수 or 멤버함수의 접근 레벨
	
	// 생성자, 소멸자
	// 객체 생성, 소멸 시 자동으로 호출
	// 직접 만들지 않으면 기본 생성자, 기본 소멸자가 만들어짐
	
	// 멤버함수
	// 해당 클래스가 사용하는 전용 함수
	// 해당 클래스의 객체가 필요함
	// 멤버함수를 객체를 통해서 호출하면, 해당 객체의 주소가 this 포인터로 전달된다.

	{
		// 자료형 * 변수명;		포인터 변수 선언
		// *포인터변수;			포인터로 주소 역참조
		// &변수;				변수의 주소값
		// 자료형 & 변수명:		레퍼런스 변수 선언

		// C++ 에 추가된 기능
		// 포인터와 유사
		// 원본을 참조한다.
		// 참조변수를 통해서 직접적으로 원본을 수정 할 수 있다.


		int a = 10;
		int* const p = &a;
		*p = 100;

		int& iRef = a; // = int* const p = &a;
		iRef = 100;
		// 1. 레퍼런스 연산은 포인터를 넣을 필요 없이 원본을 바로 바꿀 수 있다.

		const int* p2 = &a;
		//*p2 = 10이 불가

		const int& iRefConst = 0;
		//iRefConst = 10;

	}

	CMy c;
	c.SetInt(10);

	CMy c2;
	c2.SetInt(100);

	CMy c3;
	c3.SetInt(1000);

	int i = 0;
	int a = 10;

	c3 = c2;

	i = a;


	return 0;
}