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

// ����Ʈ �ʱ�ȭ
void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;
}

// ������ ����Ʈ ������ �߰�
template<typename T>
void PushBack(tLinkedList* _pList, T _iData)
{
	tNode<T>* pNode = (tNode<T>*)malloc(sizeof(tNode<T>));


	pNode->data = _iData;
	pNode->Next = nullptr;

	tNode<T>* node;

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


template<typename T>
void PushFront(tLinkedList* _pList, T _iData);

// ������ ����Ʈ �޸� ����
void ReleaseList(tLinkedList* _pList);