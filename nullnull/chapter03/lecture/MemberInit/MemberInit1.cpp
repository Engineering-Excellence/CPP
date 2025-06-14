// Chapter03 클래스

// 3.2 클래스 기본 문법

// 3.2.1 멤버 선언 및 정의 - 멤버 변수 초기화를 위한 생성자 함수 사용

#include <iostream>

using namespace std;

class CTest {
public:
    int m_nData;    // 멤버 데이터 선언

    CTest() {   // CTest 클래스의 생성자 함수 선언 및 정의
        m_nData = 10;   // 인스턴스가 생성되면 멤버 데이터를 자동으로 초기화한다.
    }

    void printData() const {    // 멤버 함수 선언 및 정의
        cout << m_nData << endl;    // 멤버 데이터에 접근하고 값을 출력한다.
    }
};

int main() {
    CTest t;    // 객체 선언시 생성자 함수를 자동으로 호출
    t.printData();

    return 0;
}