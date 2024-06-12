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

	// 추가한 데이터가 처음인지 아닌지
	if (0 == _pList->iCount)
	{
		_pList->pHeadNode = pNode;
	}
	else
	{
		// 현재 가장 마지막 노드를 찾아서,
		// 현재
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
	// 1. 데이터를 넣을 노드 생성
	tNode* node = (tNode*)malloc(sizeof(tNode));
	// 2. 노드 다음 주소를 헤드 주소로 하기
	node->data = _iData;
	node->Next = _pList->pHeadNode;
	// 3. 헤드 주소를 노드 주소로 바꾸기
	_pList->pHeadNode = node;

	// 데이터 카운트 증가
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
