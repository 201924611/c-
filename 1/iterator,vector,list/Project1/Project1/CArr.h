#include <assert.h>

template<typename T>
class CArr
{
private:
	T*		m_pData;
	int		m_iCount;
	int		m_iMaxCount;

public:

	void push_back(const T& _Data);
	void resize(int _iDataCount);
	int size() { return m_iCount; };

	T& operator[] (int idx);
	class iterator;
	iterator begin();
	iterator end();
	iterator erase(iterator& _iter);

	void clear()
	{
		m_iCount = 0;
	}

public:
	CArr();
	~CArr();

	// inner Ŭ������ �����ϰ� �ִ� Ŭ������ private ����� ���ٰ���
	class iterator
	{
	private:
		CArr*	m_pArr;		// iterator �� ����ų �����͸� �����ϴ� �����迭 �ּ�
		T*		m_pData;	// �����͵��� ���� �ּ�	
		int		m_iIdx;		// ����Ű�� �������� �ε���
		bool	m_bValid;

	public:
		T& operator *()
		{
			// iterator �� �˰��ִ� �ּҿ�, �����迭�� �˰� �ִ� �ּҰ� �޶��� ���(����Ȯ������ �ּҰ� �޶��� ���)
			// iterator �� end iterator �� ���
			if (m_pArr->m_pData != m_pData || -1 == m_iIdx || !m_bValid)
			{
				assert(nullptr);
			}
			return m_pData[m_iIdx];
		}
	

		iterator& operator ++()
		{
			// end iterator �� ���
			// iterator �� �˰��ִ� �ּҿ�, �����迭�� �˰� �ִ� �ּҰ� �޶��� ���(����Ȯ������ �ּҰ� �޶��� ���)
			if (m_pArr->m_pData != m_pData || -1 == m_iIdx)
			{
				assert(nullptr);
			}
			// iterator �� ������ �����͸� ����Ű�� �ִ� ���
			if (m_pArr->size() - 1 == m_iIdx)
			{
				m_iIdx = -1;
			}
			else
			{
				++m_iIdx;
			}
			return *this;
		}

		// ++ ����
		iterator operator ++(int)
		{
			iterator copy_iter = *this;
			++(*this);

			return copy_iter;
		}
		// -- ����, ���� ���� �����غ���
		iterator& operator --()
		{
			// 1. �ε���
			if (m_pArr->m_pData != m_pData || -1 == m_iIdx)
			{
				assert(nullptr);
			}
			if (0 == m_iIdx) {
				assert(nullptr)
			}
			else
				m_iIdx--;

			return *this;
		}

		iterator operator --(int)
		{
			if (m_pArr->m_pData != m_pData || -1 == m_iIdx)
			{
				assert(nullptr);
			}
			if (0 == m_iIdx) {
				assert(nullptr)
			}
			iterator copy_iter = *this;
			--(*this);

			return copy_iter;
		}

		// �񱳿����� ==, !=
		bool operator == (const iterator& _otheriter)
		{
			if (m_pData == _otheriter.m_pData && m_iIdx == _otheriter.m_iIdx)
			{
				return true;
			}

			return false;
		}

		bool operator != (const iterator& _otheriter)
		{
			// �����ϰ�
			return !(*this == _otheriter);
		}



	public:
		iterator()
			: m_pArr(nullptr)
			, m_pData(nullptr)
			, m_iIdx(-1)
			, m_bValid(false)
		{
		}
		iterator(CArr* m_pArr, T* _pData, int _iIDX)
			: m_pArr(m_pArr)
			, m_pData(_pData)
			, m_iIdx(_iIDX)
			, m_bValid(false)
		{
			if (nullptr != _pArr && 0 <= iIdx)
			{
				m_bValid = true;
			}
		}

		~iterator()
		{
		}

		friend class CArr;
	};

};

template<typename T>
CArr<T>::CArr()
	: m_pData(nullptr)
	, m_iCount(0)
	, m_iMaxCount(2)
{
	m_pData = new T[2];

}

template<typename T>
CArr<T>::~CArr()
{
	delete[] m_pData;
}

template<typename T>
void CArr<T>::push_back(const T& _Data)
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

template<typename T>
void CArr<T>::resize(int _iResizeCount)
{
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}
	// 1. �������� ��ų ������ŭ �����Ҵ� �Ѵ�.
	T* pNew = new T[_iResizeCount];

	// 2. ���� ������ �ִ� �����͵��� ���� �Ҵ��� �������� �����Ų��.
	for (int i = 0; i < m_iCount; ++i)
	{
		pNew[i] = m_pData[i];
	}


	// 3. ���� ���� �޸� ����
	delete[] m_pData;

	// 4. �迭�� ���� �Ҵ�� ������ ����Ű�� �Ѵ�.
	m_pData = pNew;

	// 5. MaxCount ������ ����
	m_iMaxCount = _iResizeCount;
}

template<typename T>
T& CArr<T>::operator[](int idx)
{
	return m_pData[idx];
}

template<typename T>
typename CArr<T>::iterator CArr<T>::begin()
{
	// �����Ͱ� �ϳ��� ���� ��� ����ó��
	if (0 == m_iCount)
		return iterator(this, m_pData, -1);
	else {
		// ������ ����Ű�� iterator �� ���� ��ȯ����
		return iterator(this, m_pData, 0);
	}
}

template<typename T>
typename CArr<T>::iterator CArr<T>::end()
{
	return iterator(this, m_pData, -1);
}

template<typename T>
typename CArr<T>::iterator CArr<T>::erase(iterator& _iter)
{
	// iterator �� �ٸ� Arr �� ��Ҹ� ����Ű�� ���
	// iterator �� end iterator�� ���
	if (_iter.m_pArr != this || end() == _iter || m_iCount() <= _iter.m_iIdx)
	{
		assert(nullptr);
	}
	// iterator �� ����Ű�� �����͸� �迭 ������ �����Ѵ�.
	int iLoopCount = m_iCount - (_iter.m_iIdx + 1);
	
	for (int i = 0; i < iLoopCount; ++i)
	{
		m_pData[i + _iter.m_iIdx] = m_pData[i + _iter.m_iIdx + 1];
	}

	_iter.m_bValid = false;

	// ī��Ʈ ����
	--m_iCount;


	return iterator(this, m_pData, _iter.m_iIdx);
}