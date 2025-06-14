// Chapter03 클래스

// 3.2 클래스 기본 문법

// 3.2.1 멤버 선언 및 정의

#include <iostream>

using namespace std;

class CTest {
public:
    // C++11부터 선언과 동시에 멤버 변수 초기화 가능
    int m_nData1{10};
    int m_nData2{20};

    CTest() {
        cout << "CTest(): 생성자 함수" << endl;
    }

    void printData() const;
};

void CTest::printData() const {
    cout << m_nData1 << endl;
    cout << m_nData2 << endl;
}

int main() {
    CTest t;
    t.printData();

    return 0;
}