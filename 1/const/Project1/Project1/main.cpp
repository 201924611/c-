#include <stdio.h>


int main()
{
	//const
	const int cint = 100;

	// ���ȭ
	// l-value : ����
	// r-value : ���
	int ii = 10;

	int *pInt = (int*)&cint;
	*pInt = 300;
	printf("cint ��� : %d\n", cint);

	return 0;
	
	

}