// Chapter03 클래스

// 3.4 메서드

// 3.4.2 실습 과제1: 프로젝트 생성 및 초기 코드 작성
// 3.4.4 실습 과제2: 멤버 함수 상수화

#include "MyString.h"
#include <iostream>

using namespace std;

void testFunc(const CMyString &param) {
    cout << param.getString() << endl;
}

int main() {
    CMyString strData;
    strData.setString("Hello");
//    cout << strData.getString() << endl;
    testFunc(strData);

    return 0;
}