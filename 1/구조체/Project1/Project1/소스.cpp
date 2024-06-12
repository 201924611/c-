#include <stdio.h>
#include <stdlib.h>

typedef struct MYST {
	int a;
	float f;
}MYST;

int main(){

	MYST s= {
	};

	MYST* pST = &s;

	(*pST).a = 100;
	(*pST).f = 3.14f;

	pST->a = 100;
	pST->f = 3.14f;

}