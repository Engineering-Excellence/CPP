// Chapter03 클래스

// 3.4 메서드

// 3.4.2 실습 과제1: 프로젝트 생성 및 초기 코드 작성
// 3.4.4 실습 과제2: 멤버 함수 상수화

#ifndef MYSTRING_H
#define MYSTRING_H

#pragma once

class CMyString {
private:
    char *m_pszData;    // 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
    int m_nLength;  // 저장된 문자열의 길이

public:
    CMyString();

    ~CMyString();

    const char *getString() const;  // 멤버 읽기만 수행하므로 메서드를 상수화한다.

    int setString(const char *pszParam);

    void release();
};

#endif //MYSTRING_H