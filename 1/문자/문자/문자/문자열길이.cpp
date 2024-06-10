#include "문자열길이.h"
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
	// 예외처리
	// 이어붙인 최종 문자열 길이가, 원본 저장 공간을 넘어서려는 경우
	int _pDest_Len = GetLength(_pDest);
	int _pSrc_Len = GetLength(_pSrc);

	if (_iBufferSize < _pDest_Len + _pSrc_Len + 1) { // NULL 문자까지 계산
		assert(nullptr);
	}

	// 문자열 이어 붙이기
	// 1. Dest 문자열의 끝을 확인( 문자열이 이어 붙을 시작 위치)
	_pDest_Len; // Dest 문자열의 끝 인덱스

	// 2. 반복적으로 Src 문자열을 Dest 끝 위치에 복사하기
	// 3. Src 문자열을 끝을 만나면 반복 종료
	for (int i = 0; i < _pSrc_Len + 1 ; ++i)
	{
		_pDest[_pDest_Len + i] = _pSrc[i];
	}


}

int wcequal(const wchar_t* _pleft, const wchar_t* _pright)
{
	// 1. 문자열 길이 비교
	int _pleft_Len = GetLength(_pleft);
	int _pright_Len = GetLength(_pright);

	int Len = (_pleft_Len > _pright_Len) ? _pright_Len : _pleft_Len;

	// 2. 문자열 작은 쪽으로 반복 인덱스 설정, 반복
	
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

	// 3. 2번이 전부 다 같고 문자열의 길이가 다를 때
	if (_pleft_Len != _pright_Len)
	{
		return (_pleft_Len > _pright_Len) ? 1 : -1;
	}
	else
		return 0;
}