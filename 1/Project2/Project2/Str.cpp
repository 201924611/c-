#include <stdio.h>



// ����� ���� �ڷ���
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
	// ����ü
	MYST t;
	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(t);


	NEWST b;



	return 0;
}