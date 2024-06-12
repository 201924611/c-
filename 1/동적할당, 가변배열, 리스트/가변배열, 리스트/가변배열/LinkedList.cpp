#include "LinkedList.h"
#include <iostream>

void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;
}

void PushBack(tLinkedList* _pList, int _iData)
{
	tNode* pNode = (tNode*)malloc(sizeof(tNode));
	

	pNode->data = _iData;
	pNode->Next = nullptr;

	tNode* node;

	// �߰��� �����Ͱ� ó������ �ƴ���
	if (0 == _pList->iCount)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{
		// ���� ���� ������ ��带 ã�Ƽ�,
		// ����
		node = _pList->pHeadNode;
		while (node->Next)
		{
			node = node->Next;
		}
		node->Next = pNode;
	}

	++_pList->iCount;
}

void PushFront(tLinkedList* _pList, int _iData)
{
	// 1. �����͸� ���� ��� ����
	tNode* node = (tNode*)malloc(sizeof(tNode));
	// 2. ��� ���� �ּҸ� ��� �ּҷ� �ϱ�
	node->data = _iData;
	node->Next = _pList->pHeadNode;
	// 3. ��� �ּҸ� ��� �ּҷ� �ٲٱ�
	_pList->pHeadNode = node;

	// ������ ī��Ʈ ����
	++_pList->iCount;
}

void ReleaseList(tLinkedList* _pList)
{
	tNode* pDeletNode = _pList->pHeadNode;

	while (pDeletNode)
	{
		tNode* pNext = pDeletNode->Next;
		free(pDeletNode);
		pDeletNode = pNext;
	}

}
