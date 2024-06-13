#pragma once

// 1. 배열 안에 구조체

typedef struct _arr{
	int* p;
	int count;
	int maxcount;
}arr;

// 2. 입력받은 크기로 배열 만들기
void makearr(arr* a, int size);

// 3. 입력받은 값 배열에 넣기
void insertarr(arr* a, int data);

// 정렬
void Sort(arr* a, void(*srt)(arr*));

// 버블정렬
void BubbleSort(arr* a);

// 머지정렬
void MergeSort(arr* a);

// 삽입정렬
void InsertSort(arr* a);

// 선택정렬
void SelectSort(arr* a);

// 퀵정렬
void QuickSort(arr* a);

// 힙정렬
void HeapSort(arr* a);

// 3.5 데이터 공간 부족하면 재할당
void Reallocate(arr* a);

// 값 출력
void prArr(arr* a);

// 4. 할당해제
void frallocate(arr* a);

