#pragma once

template<typename T>
struct tNode
{
	T					data;
	struct tNode*		Next;
	
};


struct tLinkedList
{
	struct tNode*		pHeadNode;
	int					iCount;
};

// 리스트 초기화
void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;
}

// 연결형 리스트 데이터 추가
template<typename T>
void PushBack(tLinkedList* _pList, T _iData)
{
	tNode<T>* pNode = (tNode<T>*)malloc(sizeof(tNode<T>));


	pNode->data = _iData;
	pNode->Next = nullptr;

	tNode<T>* node;

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


template<typename T>
void PushFront(tLinkedList* _pList, T _iData);

// 연결형 리스트 메모리 해제
void ReleaseList(tLinkedList* _pList);