#include <stdlib.h>
#include <stdio.h>

void Output(const int* pi)
{
	int i = *pi;
	int* pint = (int*)pi;
	*pint = 1000;
}

int main()
{
	// 1. const
	const int i = 100;

	// const �� ������
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// ============
	// const ������
	// ============
	const int* pConstInt = &a;
	//*pConstInt = 100
	int b = 0;
	pConstInt = &b;

	// ============
	// ������ const
	// ============
	int* const pIntConst = &a;

	*pIntConst = 500;
	//pIntConst = &b;


	// �ʱ�ȭ �� ����Ų ��� ����Ŵ, ����Ű�� ���� ���� �Ұ�
	const int* const pConstIntConst = nullptr;


	// const��ġ�� ����Ʈ ��ġ�� const �������ΰ� �˼� �ִ�.
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



	return 0;
}


// ����Ű
// Ctrl + Shift + Space