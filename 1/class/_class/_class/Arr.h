#pragma once


typedef struct _tagArr
{
	int*	pInt;
	int		iCount;
	int		iMaxCount;
}tArr;


// ����Ű Ctrl + '+', '.'

// �迭 �ʱ�ȭ �Լ�
void InitArr(tArr* _pArr);

// ������ �߰� �Լ�
void PushBack(tArr* _pArr, int _iData);

// ���Ҵ�
void Reallocate(tArr* _pArr); // Reallocate �Լ��� ��� ���ϰ� ���� ���� ����

// �迭 �޸� ���� �Լ�
void ReleaseArr(tArr* _pArr);

