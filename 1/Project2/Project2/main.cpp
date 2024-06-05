#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	

	int iData = Add(100, 200);

	// 반복문
	//for (/*반복자 초기화*/;/*반복자 조건 체크*/; /*반복자 변경*/)
	//{
	//	 
	//}
	
	for (int i = 0; i < 4; ++i) 
	{
		if (i % 2)
		{
			continue;
		}

		printf("Output Test\n");		
	}
	
	/*int i = 0;
	while ( i < 2 )
	{

		printf("Output Test\n");
		++i;

		continue;

		break;

	}*/


	// 콘솔
	// printf
	printf("abcdef  %d   \n", 10);
	printf("abcdef  %f   \n", 3.14f);


	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d \n", i);
	}


	// scanf

	int iInput = 0;
	scanf_s("%d", &iInput);



	return 0;

}

// 단축키
// 지정한 구문 주석			: Ctrl + k, c
// 지정한 구문 주석 해제	: Ctrl + k, u
// Alt Drag

// 디버깅
// 디버깅 시작 : F5
// 디버깅 시작 이후 다음 중단점까지 코드 실행 : F5
// 중단점 생성 및 해제 : F9
// 디버깅 중, 구문 수행 : F10
// 디버깅 중, 구문 수행(함수 진입) : F11
// 디버깅 중, 디버깅 종료하기 : Shift + F5

