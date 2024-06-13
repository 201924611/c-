#pragma once

// 1. �迭 �ȿ� ����ü

typedef struct _arr{
	int* p;
	int count;
	int maxcount;
}arr;

// 2. �Է¹��� ũ��� �迭 �����
void makearr(arr* a, int size);

// 3. �Է¹��� �� �迭�� �ֱ�
void insertarr(arr* a, int data);

// ����
void Sort(arr* a, void(*srt)(arr*));

// ��������
void BubbleSort(arr* a);

// ��������
void MergeSort(arr* a);

// ��������
void InsertSort(arr* a);

// ��������
void SelectSort(arr* a);

// ������
void QuickSort(arr* a);

// ������
void HeapSort(arr* a);

// 3.5 ������ ���� �����ϸ� ���Ҵ�
void Reallocate(arr* a);

// �� ���
void prArr(arr* a);

// 4. �Ҵ�����
void frallocate(arr* a);

