// Chapter03 클래스

// 3.2 클래스 기본 문법

// 3.2.1 멤버 선언 및 정의 - 멤버 함수 선언과 정의를 분리

#include <iostream>

using namespace std;

class CTest {
public:
    int m_nData;

    CTest() {
        cout << "CTest(): 생성자 함수" << endl;
        m_nData = 10;
    }

    void printData() const; // 멤버 함수 선언. 정의는 분리했다!
};

void CTest::printData() const {    // 외부에 분리된 멤버 함수 정의
    cout << m_nData << endl;
}

int main() {
    cout << "main() 함수 시작" << endl;

    CTest t;
    t.printData();

    cout << "main() 함수 끝" << endl;

    return 0;
}