#include <iostream>

#include "Arr.h"
// ����
// ����(����)
// ����, ����, �ܺ�(������)



// �޸𸮿���
// ����
// ������
// �ڵ�
// �� ����(�����Ҵ�)




void Test(int a)
{
	printf("%d\n", a);
}

typedef struct _tagST
{
	int iArr[g_i];
}ST;


int main()
{
	// ���� �Լ����� ���� �ڵ�����;� �����
	// (void) malloc(100);
	// �� ������ 100����Ʈ�� �Ҵ��Ѵ�
	// �� ���� ������ ������ �Ҵ��ϸ� �ּҸ� 100����Ʈ�� ���� �ּҸ� �Ѱ��ش�.
	// malloc�� ��ȯŸ���� void
	//int* pInt = (int*)malloc(100);

	/*
	float* pF = (float*)malloc(4);
	int* pI = (int*)pF;

	*pF = 2.4f;

	int i = *pI;
	*/

	// �����Ҵ�
	// 1. ��Ÿ�� �߿� ���� ����
	// 2. ����ڰ� ���� �����ؾ���(����)


	Test(10);

	int iInput = 0;
	scanf_s("d", &iInput);

	int* pInt = nullptr;
	if (100 == iInput)
	{
		pInt = (int*)malloc(100);
	}


	if (nullptr != pInt)
	{
		free(pInt);
	}

	// �����迭
	// ������ ������ �迭���� �̹� Ȯ���Ǿ���Ѵ�.(����������)

	int a = 100;

	int iInput = 0;
	scanf_s("%d", &a);

	// �迭 ������ ������ ������ ������ ��� �� �� ����.
	// int arr[a] = {}
	
	// ��ü(Instance)
	// int,
	// int a;
	
	tArr arr;

	tArr arr2;

	tArr arr3;
	
	
	return 0;

}