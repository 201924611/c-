#include "arr.h"
#include <iostream>
#include<math.h>

void Divide(arr* a, int start, int end, int* temp);
void MS(arr* a, int start, int end, int* temp);
void Insert(arr* a, int key);

void makearr(arr* a, int size)
{
	a->p = (int*)malloc(size * sizeof(int));
	a->maxcount = size;
	a->count = 0;
}

void insertarr(arr* a, int data)
{
	if (a->maxcount <= a->count)
	{
		Reallocate(a);
	}
	a->p[a->count++] = data;
}

void Sort(arr* a, void(*srt)(arr*))
{
	srt(a);
}

void BubbleSort(arr* a)
{
	int mem;
	for (int i = a->count-1; i > 0; --i)
	{
		for (int j = 0; j < i; j++) {
			// 1. 첫번째 값 두번째 값 값 비교 후 바꿔주기
			if (a->p[j] > a->p[j+1])
			{
				mem = a->p[j];
				a->p[j] = a->p[j + 1];
				a->p[j + 1] = mem;
			}
		}
	}
}


void MergeSort(arr* a)
{
	int* temp = (int*)malloc(a->count * sizeof(int));
	Divide(a, 0, a->count-1, temp);
	free(temp);
}


void Divide(arr* a, int start, int end, int* temp) {
	if (start < end) {		
		
		int mid = (start + end) / 2;
		Divide(a, start, mid, temp);		
		Divide(a, mid + 1, end, temp);
		MS(a, start, end, temp);
	}
}

void MS(arr* a, int start, int end, int* temp)
{

	int mid = (start + end) / 2;

	int i = start, j = mid + 1, k = start;		
	

	while (i <= mid && j <= end) {
		if (a->p[i] <= a->p[j])
			temp[k++] = a->p[i++];		
		else
			temp[k++] = a->p[j++];
	}

	while (i <= mid)			
		temp[k++] = a->p[i++];
	while (j <= end)
		temp[k++] = a->p[j++];

	for (int i = start; i <= end; i++)
		a->p[i] = temp[i];		


}

void InsertSort(arr* a)
{
	for (int i = 1; i < a->count; i++) {
		Insert(a, i);
	}
}

void Insert(arr* a, int key)
{
	int temp;
	for (int j = key; j > 0; j--)
	{
		if (a->p[j] < a->p[j - 1])
		{
			temp = a->p[j];
			a->p[j] = a->p[j - 1];
			a->p[j - 1] = temp;
		}
		else
			break;
	}
}

void Reallocate(arr* a)
{
	int* pNew = (int*)malloc((a->maxcount + 10) * sizeof(int));
	for (int i = 0; i < a->count; ++i)
	{
		pNew[i] = a->p[i];
	}
	free(a->p);
	a->p = pNew;

}

void prArr(arr* a)
{
	for (int i = 0; i < a->count; ++i)
	{
		printf("a->p[%d] = %d\n",i, a->p[i]);
	}
}

void frallocate(arr* a)
{
	free(a->p);
	a->count = 0;
	a->maxcount = 0;
}
