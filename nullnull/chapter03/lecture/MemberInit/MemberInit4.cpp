// Chapter03 클래스

// 3.2 클래스 기본 문법

// 3.2.1 멤버 선언 및 정의 - 생성자 초기화 목록을 이용한 멤버 변수 초기화

#include <iostream>

using namespace std;

class CTest {
public:
    // 2개의 멤버 데이터 선언
    int m_nData1;
    int m_nData2;

    // 생성자 초기화 목록을 이용(멤버 변수가 참조자 형식이면 반드시 초기화 목록 이용)
    CTest()
            : m_nData1{10}, m_nData2{20} {
        cout << "CTest(): 생성자 함수" << endl;
    }

    void printData() const;
};

void CTest::printData() const {
    // 2개의 멤버 데이터에 접근하고 값을 출력한다.
    cout << m_nData1 << endl;
    cout << m_nData2 << endl;
}

int main() {
    CTest t;
    t.printData();

    return 0;
}