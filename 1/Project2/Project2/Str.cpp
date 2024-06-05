#include <stdio.h>



// 사용자 정의 자료형
typedef struct _tagMyST
{
	int		a;
	float	f;
}MYST;

typedef struct _tagBig
{
	MYST	k;
	int		i;
	char	c;
}BIG;

typedef int INT;

typedef struct NewStruct
{
	int a;
	short s;
}NEWST;


int main()
{
	// 구조체
	MYST t;
	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(t);


	NEWST b;



	return 0;
}