// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.4 실습 과제3: 복사 생성자와 대입 연산자
// 4.2.3 실습 과제4: 허용되는 변환 적용하기

#include "MyString.h"
#include <iostream>

using namespace std;

void testFunc(const CMyString &strParam) {
    cout << strParam << endl;
}

int main() {
    CMyString strData, strTest;
    strData.setString("Hello");
    strTest.setString("World");

    // 복사 생성
    CMyString strNewData(strData);
    cout << strNewData.getString() << endl;

    // 단순 대입 연산자 호출
    strNewData = strTest;
    cout << strNewData.getString() << endl;

    return 0;
}