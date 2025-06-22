// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.4 실습 과제3: 복사 생성자와 대입 연산자
// 4.2.3 실습 과제4: 허용되는 변환 적용하기

#include "MyString.h"
#include <cstring>

CMyString::CMyString()
        : m_pszData(nullptr), m_nLength{0} {}

CMyString::CMyString(const char *pszParam)  // 변환 생성자
        : m_pszData(nullptr), m_nLength(0) {
    setString(pszParam);
}

CMyString::CMyString(const CMyString &rhs)  // 복사 생성자
        : m_pszData{nullptr}, m_nLength{0} {
    this->setString(rhs.getString());
}

CMyString &CMyString::operator=(const CMyString &rhs) {
    if (this != &rhs) { // 자기 자신에 대한 대입이면 아무 것도 하지 않는다.
        release();
        this->setString(rhs.getString());
    }
    return *this;
}

CMyString::~CMyString() {
    release();
}

const char *CMyString::getString() const {
    return m_pszData;
}

int CMyString::setString(const char *pszParam) {
    release();

    if (pszParam == nullptr)
        return 0;

    int nLength = strlen(pszParam);
    if (nLength == 0)
        return 0;

    m_pszData = new char[nLength + 1];

    strcpy(m_pszData, pszParam);
    m_nLength = nLength;

    return m_nLength;
}

void CMyString::release() {
    if (m_pszData != nullptr)
        delete[] m_pszData;

    m_pszData = nullptr;
    m_nLength = 0;
}