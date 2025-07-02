// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.4 실습 과제3: 복사 생성자와 대입 연산자
// 4.2.3 실습 과제4: 허용되는 변환 적용하기
// 4.3.4 실습 과제5: 이동 생성자 호출

#include "MyString.h"
#include <cstring>
#include <iostream>

using namespace std;

CMyString::CMyString()
    : m_pszData(nullptr), m_nLength{0} {}

CMyString::CMyString(const char* pszParam) // 변환 생성자
    : m_pszData(nullptr), m_nLength(0)
{
    setString(pszParam);
}

CMyString::CMyString(const CMyString& rhs) // 복사 생성자
    : m_pszData{nullptr}, m_nLength{0}
{
    this->setString(rhs.getString());
}

CMyString::CMyString(CMyString&& rhs) noexcept // 이동 생성자
    : m_pszData(nullptr)
      , m_nLength(0)
{
    cout << "CMyString 이동 생성자 호출" << endl;

    // 얕은 복사를 수행해도 상관없다. 어차피 원본이 곧 소멸되기 때문이다.
    m_pszData = rhs.m_pszData;
    m_nLength = rhs.m_nLength;

    // 원본 임시 객체의 멤버들은 초기화한다. 절대로 해제하면 안 된다.
    rhs.m_pszData = nullptr;
    rhs.m_nLength = 0;
}


CMyString& CMyString::operator=(const CMyString& rhs)
{
    if (this != &rhs)
    {
        // 자기 자신에 대한 대입이면 아무 것도 하지 않는다.
        release();
        this->setString(rhs.getString());
    }
    return *this;
}

CMyString::~CMyString()
{
    release();
}

const char* CMyString::getString() const
{
    return m_pszData;
}

int CMyString::setString(const char* pszParam)
{
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

void CMyString::release()
{
    if (m_pszData != nullptr)
        delete[] m_pszData;

    m_pszData = nullptr;
    m_nLength = 0;
}
