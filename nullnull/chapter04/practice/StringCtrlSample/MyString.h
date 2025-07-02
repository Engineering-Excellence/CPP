// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.4 실습 과제3: 복사 생성자와 대입 연산자
// 4.2.3 실습 과제4: 허용되는 변환 적용하기
// 4.3.4 실습 과제5: 이동 생성자 호출

#ifndef MYSTRING_H
#define MYSTRING_H

#pragma once

class CMyString
{
private:
    char* m_pszData;
    int m_nLength;

public:
    CMyString();

    explicit CMyString(const char* pszParam); // 변환 생성자

    operator char*() const
    {
        return m_pszData;
    };

    CMyString(const CMyString& rhs); // 복사 생성자

    CMyString(CMyString&& rhs) noexcept; // 이동 생성자

    CMyString& operator=(const CMyString& rhs);

    ~CMyString();

    const char* getString() const;

    int setString(const char* pszParam);

    void release();
};

#endif //MYSTRING_H
