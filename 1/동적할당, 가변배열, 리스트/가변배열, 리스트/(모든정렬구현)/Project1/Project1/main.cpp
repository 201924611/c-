#include <iostream>
#include "arr.h"

	// 1. �����迭
	// ������ ���� �����ϰ� ������ ��

	// 2. �����迭 �ȿ� ���� ������ ����
	// - ���� ����


int main()
{

	arr s1 = {};

	// 1. �����迭�� ��� ���� ũ��� ������ �Է� �ް� �����
	int size;
	printf("�迭�� ũ�⸦ �Է��ϼ���\n");
	scanf_s("%d", &size);
	makearr(&s1, size);
	// 2. �����迭�� ������ ���� �ֱ�
	int data = 0;
	printf("������ ũ�� ��ŭ ���� ���� ��������\n");
	for (int i = 0; i < s1.maxcount; i++)
	{
		scanf_s("%d", &data);
		insertarr(&s1, data);
	}
	
	// 3. ������ ���� - ���� ����
	printf("������ ��\n");
	Sort(&s1,&HeapSort);
	prArr(&s1);

	
	// 4. �Ҵ�����
	frallocate(&s1);

	



	return 0;
}