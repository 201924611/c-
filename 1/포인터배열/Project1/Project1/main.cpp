#include <stdlib.h>
#include <stdio.h>

int main()
{
	// ������ ����
	// �ڷ��� ������
	int* pInt = nullptr;

	// �ּҸ� ����

	// ������ ������ ũ��� 8 ����Ʈ��.(64��Ʈ)
	// pInt�� int*�����̱� ������, ����Ű�� ���� int�� �ؼ��Ѵ�.
	// ���� �ּҰ��� 1 �����ϴ� �ǹ̴� ���� int ��ġ�� �����ϱ� ���� sizeof(int) ������ ����


	char* pChar = nullptr;
	short* pShort = nullptr;


	// �����Ϳ� �迭
	// �迭�� Ư¡
	// 1. �޸𸮰� �������� �����̴�.
	// 2. �迭�� �̸��� �迭�� ���� �ּ��̴�.

	int iArr[10] = {};

	// int ������ ����
	*(iArr + 0) = 10; //iArr[0] = 10
	*(iArr + 1) = 10; //iArr[1] = 10

	// ������ ���� Ȯ�� ����
	// ���� 1.
	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	int* pI = (int*)sArr;

	int iData = *((short*)(pI + 2));

	printf("1�� ���� ���� : %d\n", iData);

	// ���� 2.
	char cArr[2] = { 1 , 1 };

	short* pS = (short*)cArr;

	iData = *pS;

	printf("2�� ���� ���� : %d\n", iData);

	int a;

	// scanf_s���� �ּҸ� �䱸��, �ּҸ� �޾ư��� ���� �־���
	scanf_s("%d", &a);

	return 0;
}