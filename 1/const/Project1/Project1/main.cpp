#include <stdio.h>


int main()
{
	//const
	const int cint = 100;

	// 상수화
	// l-value : 변수
	// r-value : 상수
	int ii = 10;

	int *pInt = (int*)&cint;
	*pInt = 300;
	printf("cint 출력 : %d\n", cint);

	return 0;
	
	

}