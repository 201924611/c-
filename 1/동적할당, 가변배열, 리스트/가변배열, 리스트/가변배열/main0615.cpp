#include <iostream>
#include "CList.h"

#include <vector>
#include <list>

namespace MYSPACE
{
	int g_int;
}

namespace OHTERSPACE
{
	int g_int;
}

//using namespace std;
using namespace MYSPACE;
// using namespace OHTERSPACE;

// using namespace std;
using std::cout;
using std::endl;
using std::cin;
using std::wcout;

using std::vector;
using std::list;

void MyEndL()
{
	wprintf(L"\n");
}

class CMyOstream
{

public:
	CMyOstream& operator << (int _idata)
	{
		wprintf(L"%d", _idata);
		return *this;
	}

	CMyOstream& operator << (const wchar_t* _pString)
	{
		wprintf(L"%s", _pString);
		return *this;
	}

	CMyOstream& operator << (void (*_pFunc)(void))
	{
		_pFunc();
		return *this;
	}

	CMyOstream& operator >> (int* _idata)
	{
		scanf_s("%d", _idata);
		return *this;
	}
};

// 아무 변수가 없어도 객체를 만들면 실체가 있어야 하기 때문에 1바이트
CMyOstream mycout;



int main()
{
	CList<int> alist;

	for (int i = 0; i < 4; ++i)
	{
		alist.push_back(i);
	}

	// C printf
	cout << "안녕" << 10 << endl;
	// C scanf
	int iInput = 0;
	cin >> iInput;

	//mycout << 10 << 20 << 30;
	//mycout << L"안녕";

	setlocale(LC_ALL, "korean");
	_wsetlocale(LC_ALL, L"korean");

	mycout << L"한글";

	int a = 0;
	mycout >> &a;
	mycout << MyEndL;
	
	vector<int> vecInt;
	vecInt.push_back(10);
	vecInt.push_back(10);

	vecInt[0] = 100;
	vecInt.at(1);
	vecInt.data();
	vecInt.size();
	vecInt.capacity();

	for (size_t i = 0; i < vecInt.size(); ++i)
	{
		cout << vecInt.at(i) << endl;
	}
	vector<int>::iterator veciter = vecInt.begin();
	*veciter = 100;

	vecInt[0] = 100;



	list<int> listInt;
	listInt.push_back(10);
	listInt.push_front(100);

	// iterator(inner class) 
	// 반복자
	list<int>::iterator iter = listInt.begin();
	int iData = *iter;

	return 0;
}