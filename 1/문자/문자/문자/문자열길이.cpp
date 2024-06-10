#include "���ڿ�����.h"
#include "assert.h"


unsigned int GetLength(const wchar_t* _pStr)
{
	int i = 0;
	while (_pStr[i])
	{
		
		++i;
		
	}

	return i;
}

void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* _pSrc)
{
	// ����ó��
	// �̾���� ���� ���ڿ� ���̰�, ���� ���� ������ �Ѿ���� ���
	int _pDest_Len = GetLength(_pDest);
	int _pSrc_Len = GetLength(_pSrc);

	if (_iBufferSize < _pDest_Len + _pSrc_Len + 1) { // NULL ���ڱ��� ���
		assert(nullptr);
	}

	// ���ڿ� �̾� ���̱�
	// 1. Dest ���ڿ��� ���� Ȯ��( ���ڿ��� �̾� ���� ���� ��ġ)
	_pDest_Len; // Dest ���ڿ��� �� �ε���

	// 2. �ݺ������� Src ���ڿ��� Dest �� ��ġ�� �����ϱ�
	// 3. Src ���ڿ��� ���� ������ �ݺ� ����
	for (int i = 0; i < _pSrc_Len + 1 ; ++i)
	{
		_pDest[_pDest_Len + i] = _pSrc[i];
	}


}

int wcequal(const wchar_t* _pleft, const wchar_t* _pright)
{
	// 1. ���ڿ� ���� ��
	int _pleft_Len = GetLength(_pleft);
	int _pright_Len = GetLength(_pright);

	int Len = (_pleft_Len > _pright_Len) ? _pright_Len : _pleft_Len;

	// 2. ���ڿ� ���� ������ �ݺ� �ε��� ����, �ݺ�
	
	for (int i = 0; i < Len; i++)
	{
		if (_pleft[i] == _pright[i])
		{
			continue;
		}
		else if (_pleft[i] > _pright[i])
		{
			return 1;
		}
		else
			return -1;
	}

	// 3. 2���� ���� �� ���� ���ڿ��� ���̰� �ٸ� ��
	if (_pleft_Len != _pright_Len)
	{
		return (_pleft_Len > _pright_Len) ? 1 : -1;
	}
	else
		return 0;
}