#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>
#include "���ڿ�����.h"

// �޸� ����
// 1. ����
// 2. ������
// 3. ��
// 4. ROM(�ڵ�)


// �ڵ� ����
// ����

// �Լ� �����ε�
// �Լ� �������̵�

void Test(int a)
{
	

}

void Test(float a)
{


}



int main() {

	{
		wchar_t wc = 49;
		short s = 49;

		char c = 1;
		c = '1';

		wc = 459;
		"4 59";
		// ���鵵 ���ڿ��� �ִ�.


		int i = 0;
	}

	{

	}

	{
		// ����
		// char(1), wchar(2)

		char szChar[10] = "abcdef";
		wchar_t szWchar[10] = L"abcdef";
		const wchar_t* pchar = L"abcdef";
		// �ּҸ� �޾ƿ��� �� �ּҿ� �ִ� �����ʹ� �ڵ� ������ ������־ ���� �Ұ�
		// �迭�� ���ڿ��ڵ带 ������ �迭�������� �ٲٴ� ������ ���� ����, �����۵� 
		// ������ Ÿ�Ժ�ȯ�ؼ� �������� �����ϰԴ� �� ���� �ִµ�, ���� �ܰ迡�� ��Ÿ�ӿ��� �߻�


		short arrShort[10] = { 97, 98, 99, 100, 101, 102 };

		unsigned char szTest[10] = "abc�ѱ�";
		wchar_t szTestW[10] = L"abc�ѱ�";


		
	}

	
	wchar_t szName[10] = L"Raimond";

	int ilenw = wcslen(szName);
	int ilen = GetLength(szName);
	
	// ���ڿ� �̾� ���̱�
	Test(10);
	Test(4.15f);

	wchar_t szString[100] = L"abc";

	//wcscat_s(szString, 100, L"def");
	StrCat(szString, 100, L"asdfqwdef");

	// wcscmp()
	// ���� ���� ģ��
	// ���� �����ʿ� ���� �� ���� ������ ���� ������ ��
	// �� �������� ���� �� ���� ������ 1
	// ������ ���� ������ ���� ������ -1
	// ������ 0

	int _iRet = wcscmp(L"abc", L"abc");
	int a = wcequal(L"abc", L"ab");


	// ����ü�� ������



	

	return 0;
}
