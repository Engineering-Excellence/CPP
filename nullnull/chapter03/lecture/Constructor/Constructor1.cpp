// Chapter03 클래스

// 3.3 생성자와 소멸자

#include <iostream>

using namespace std;

class CTest {
public:
    CTest() {   // 생성자와 소멸자는 반환 형식이 없고, 함수명이 클래스명과 같음
        cout << "CTest::CTest()" << endl;
    }

    explicit/* 묵시적 변환 방지 */ CTest(string msg) { // 생성자 다중 정의 가능
        cout << "CTest::CTest(" << msg << ")" << endl;
    }

    ~CTest() {  // 소멸자는 다중 정의 불가
        cout << "~CTest::CTest()" << endl;
    }
};

CTest a;    // 전역 변수로 선언한 클래스 생성자가 main()보다 먼저 호출

int main() {
    cout << "Begin" << endl;
    CTest b{"b"};
    cout << "Before c" << endl;
    CTest c;
    cout << "End" << endl;

    return 0;
}   // 지역 변수 a는 선언된 블록 범위가 끝나면 자동으로 소멸: main() 종료 후 소멸자 자동 호출