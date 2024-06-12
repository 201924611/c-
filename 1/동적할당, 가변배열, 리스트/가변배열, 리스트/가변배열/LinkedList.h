#pragma once


typedef struct _tagNode
{
	int		data;
	struct _tagNode* Next;
}tNode;

typedef struct _tagList
{
	tNode	*pHeadNode;
	int		iCount;
}tLinkedList;

// ����Ʈ �ʱ�ȭ
void InitList(tLinkedList* _pList);

// ������ ����Ʈ ������ �߰�
void PushBack(tLinkedList* _pList, int _iData);
void PushFront(tLinkedList* _pList, int _iData);

// ������ ����Ʈ �޸� ����
void ReleaseList(tLinkedList* _pList);