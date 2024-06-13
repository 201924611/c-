#include <iostream>
#include "arr.h"

	// 1. 가변배열
	// 스스로 구현 가능하게 복습할 것

	// 2. 가변배열 안에 넣은 데이터 정렬
	// - 버블 정렬


int main()
{

	arr s1 = {};

	// 1. 가변배열을 어느 정도 크기로 만들지 입력 받고 만들기
	int size;
	printf("배열의 크기를 입력하세요\n");
	scanf_s("%d", &size);
	makearr(&s1, size);
	// 2. 가변배열에 데이터 집어 넣기
	int data = 0;
	printf("설정한 크기 만큼 값을 집어 넣으세요\n");
	for (int i = 0; i < s1.maxcount; i++)
	{
		scanf_s("%d", &data);
		insertarr(&s1, data);
	}
	
	// 3. 데이터 정령 - 버블 정렬
	printf("정렬한 값\n");
	Sort(&s1,&HeapSort);
	prArr(&s1);

	
	// 4. 할당해제
	frallocate(&s1);

	



	return 0;
}