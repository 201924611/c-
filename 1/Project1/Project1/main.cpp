

# define HUNGRY 0x1
# define THIRSTY 0x2 
# define TIRED 0x4
# define FIRE 0x8

# define COLD 0x10
# define POISON 0x20
# define POISON1 0x40
# define POISON2 0x80

# define POISON3 0x100
# define POISON4 0x200
# define POISON5 0x400
# define POISON6 0x800




// 1. 가독성
// 2. 유지보수


// 전역변수
int global = 0;

int Add(int left, int right)
{
	return left + right;
}



int main()
{
	// 자료형 (크기 단위, byte) Data Type
	// 정수형 : char(1), short(2), int(4), long(4), long long(4)
	// 실수형 : float(4), double(8)

	int i = 0;

	// 1 바이트로 양수만 표현
	// 256 가지 -> 0~255
	unsigned char c = 0;
	c = 0;
	// c = 255;
	c = -1;

	// 1 바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = 255;

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다

	int a = 4 + 4.0;

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 더 아래의 소수점까지 정확하게 표현이 가능하다.
	
	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자


	float f = 10.2415f + (float)20;

	// 비트 단위로 연산 진행,
	// & 둘다 1인 경우 1
	// | 둘다 하나라도 1 이면 1
	// ^ 같으면 0, 다르면 1
	// ~ 1은 0으로, 0은 1로

	unsigned int iStatus = 0;

	// 상태 추가
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// 상태 확인
	if (iStatus & THIRSTY)
	{

	}
	
	// 특정 자리 비트 제거
	iStatus &= ~THIRSTY;

	// 변수
	// 1. 지역변수
	// 2. 전역변수
	// 3. 정적변수
	// 4. 외부변수

	// 함수 (기능별로 모듈화 중요)
	int data = Add(10, 20);


	int iName = 100;
	
	return 0;
}