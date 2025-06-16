// Chapter03 클래스

// 3.4 메서드

// 3.4.2 실습 과제1: 프로젝트 생성 및 초기 코드 작성

#include "MyString.h"
#include <iostream>

using namespace std;

int main() {
    CMyString strData;
    strData.setString("Hello");
    cout << strData.getString() << endl;

    return 0;
}