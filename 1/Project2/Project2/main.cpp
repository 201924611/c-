#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	

	int iData = Add(100, 200);

	// �ݺ���
	//for (/*�ݺ��� �ʱ�ȭ*/;/*�ݺ��� ���� üũ*/; /*�ݺ��� ����*/)
	//{
	//	 
	//}
	
	for (int i = 0; i < 4; ++i) 
	{
		if (i % 2)
		{
			continue;
		}

		printf("Output Test\n");		
	}
	
	/*int i = 0;
	while ( i < 2 )
	{

		printf("Output Test\n");
		++i;

		continue;

		break;

	}*/


	// �ܼ�
	// printf
	printf("abcdef  %d   \n", 10);
	printf("abcdef  %f   \n", 3.14f);


	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d \n", i);
	}


	// scanf

	int iInput = 0;
	scanf_s("%d", &iInput);



	return 0;

}

// ����Ű
// ������ ���� �ּ�			: Ctrl + k, c
// ������ ���� �ּ� ����	: Ctrl + k, u
// Alt Drag

// �����
// ����� ���� : F5
// ����� ���� ���� ���� �ߴ������� �ڵ� ���� : F5
// �ߴ��� ���� �� ���� : F9
// ����� ��, ���� ���� : F10
// ����� ��, ���� ����(�Լ� ����) : F11
// ����� ��, ����� �����ϱ� : Shift + F5

