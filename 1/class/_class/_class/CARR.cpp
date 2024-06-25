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
	// �� ������ �Ҵ��� ������ �� ��
	if (m_iMaxCount <= m_iCount)
	{
		// ���Ҵ�
		resize(2 * m_iMaxCount);
	}

	// ������ �߰�
	m_pData[m_iCount++] = _Data;
}

void CArr::resize(int _iResizeCount)
{
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}
	// 1. �������� ��ų ������ŭ �����Ҵ� �Ѵ�.
	int* pNew = new int[_iResizeCount];

	// 2. ���� ������ �ִ� �����͵��� ���� �Ҵ��� �������� �����Ų��.
	for (int i = 0; i < m_iCount; ++i)
	{
		pNew[i] = m_pInt[i];
	}

	// 3. ���� ���� �޸� ����
	delete[] m_pInt;

	// 4. �迭�� ���� �Ҵ�� ������ ����Ű�� �Ѵ�.
	m_pData = pNew;

	// 5. MaxCount ������ ����
	m_iMaxCount = _iResizeCount;
}

int& CArr::operator[](int idx)
{
	return m_pInt[idx];
}
