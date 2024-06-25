

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
	// 힙 영역에 할당한 공간이 다 참
	if (m_iMaxCount <= m_iCount)
	{
		// 재할당
		resize(2 * m_iMaxCount);
	}

	// 데이터 추가
	m_pData[m_iCount++] = _Data;
}

template<typename T>
void CArr<T>::resize(int _iResizeCount)
{
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}
	// 1. 리사이즈 시킬 개수만큼 동적할당 한다.
	T* pNew = new T[_iResizeCount];

	// 2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사시킨다.
	for (int i = 0; i < m_iCount; ++i)
	{
		pNew[i] = m_pInt[i];
	}


	// 3. 기존 공간 메모리 해제
	delete[] m_pData;

	// 4. 배열이 새로 할당된 공간을 가리키게 한다.
	m_pData = pNew;

	// 5. MaxCount 변경점 적용
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
	// 시작을 가리키는 iterator 를 만들어서 반환해줌

	return iterator iter(m_pData, 0);
}
