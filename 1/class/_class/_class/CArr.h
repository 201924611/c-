

template<typename T>
class CArr
{
private:
	T*	m_pData;
	int		m_iCount;
	int		m_iMaxCount;

public:

	void push_back(const T& _Data);
	void resize(int _iDataCount);
	
	T& operator[] (int idx);
	class iterator;
	iterator begin();

public:
	CArr();
	~CArr();
	
	class iterator
	{
	private:
		CArr*	m_prr;
		T*		m_pData;
		int		m_iIdx;

	public:
		iterator()
			:m_pData(nullptr)
			, m_iIdx(-1)
		{
		}
		iterator(T* _pData, int _iIDX)
			:m_pData(_pData)
			, m_iIdx(_iIDX)
		{
		}

		~iterator()
		{
		}
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
		pNew[i] = m_pInt[i];
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
	// ������ ����Ű�� iterator �� ���� ��ȯ����

	return iterator iter(m_pData, 0);
}
