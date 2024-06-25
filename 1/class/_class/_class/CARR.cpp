#include "CArr.h"
#include <assert.h>

CArr::CArr()
	:	m_pData(nullptr)
	,	m_iCount(0)
	,	m_iMaxCount(2)
{
	m_pData = new int[2];

}

CArr::~CArr()
{
	delete[] m_pData;
}

void CArr::push_back(int _Data)
{
	// 힙 영역에 할당한 공간이 다 참
	if (m_iMaxCount <= m_iCount)
	{
		// 재할당
		resize(2 * m_iMaxCount);
	}

	// 데이터 추가
	m_pData[m_iCount++] = _Data;
}

void CArr::resize(int _iResizeCount)
{
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}
	// 1. 리사이즈 시킬 개수만큼 동적할당 한다.
	int* pNew = new int[_iResizeCount];

	// 2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사시킨다.
	for (int i = 0; i < m_iCount; ++i)
	{
		pNew[i] = m_pInt[i];
	}

	// 3. 기존 공간 메모리 해제
	delete[] m_pInt;

	// 4. 배열이 새로 할당된 공간을 가리키게 한다.
	m_pData = pNew;

	// 5. MaxCount 변경점 적용
	m_iMaxCount = _iResizeCount;
}

int& CArr::operator[](int idx)
{
	return m_pInt[idx];
}
