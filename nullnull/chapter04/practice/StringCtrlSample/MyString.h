// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.4 실습 과제3: 복사 생성자와 대입 연산자

#ifndef MYSTRING_H
#define MYSTRING_H

#pragma once

class CMyString {
private:
    char *m_pszData;
    int m_nLength;

public:
    CMyString();

    ~CMyString();

    CMyString(const CMyString &rhs);    // 복사 생성자

    CMyString &operator=(const CMyString &rhs);

    const char *getString() const;

    int setString(const char *pszParam);

    void release();
};

#endif //MYSTRING_H