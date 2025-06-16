// Chapter03 클래스

// 3.4 메서드

// 3.4.2 실습 과제1: 프로젝트 생성 및 초기 코드 작성
// 3.4.4 실습 과제2: 멤버 함수 상수화

#include "MyString.h"
#include <cstring>

CMyString::CMyString()
        : m_pszData(nullptr), m_nLength{0} {}

CMyString::~CMyString() {
    release();  // 객체가 소멸하기 전에 메모리를 해제한다.
}

const char *CMyString::getString() const {
    return m_pszData;
}

int CMyString::setString(const char *pszParam) {
    release();  // 새로운 문자열 할당에 앞서 기존 정보를 해제한다.

    if (pszParam == nullptr)    // NULL을 인수로 함수를 호출했다는 것은 메모리를 해제하고 NULL로 초기화하는 것으로 볼 수 있다.
        return 0;

    int nLength = strlen(pszParam);
    if (nLength == 0)   // 길이가 0인 문자열도 초기화로 인식하고 처리한다.
        return 0;

    m_pszData = new char[nLength + 1]; // 문자열의 끝인 NULL 문자를 고려해 메모리를 할당한다.

    strcpy(m_pszData, pszParam);    // 새로 할당한 메모리에 문자열을 저장한다.
    m_nLength = nLength;

    return m_nLength; // 문자열의 길이를 반환한다.
}

void CMyString::release() {
    if (m_pszData != nullptr)   // 이 함수가 여러 번 호출될 경우를 고려해 주요 멤버를 초기화한다.
        delete[] m_pszData;

    m_pszData = nullptr;
    m_nLength = 0;
}