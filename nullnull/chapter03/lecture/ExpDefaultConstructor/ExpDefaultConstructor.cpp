// Chapter03 클래스

// 3.3 생성자와 소멸자

// 3.3.4 명시적 디폴트 생성자

#include <iostream>

using namespace std;

class CTest {
public:
    int m_nData{5};

//    CTest();    // 디폴트 생성자 선언
    CTest() = default;  // 디폴트 생성자 선언 및 정의
//    CTest() = delete;   // error C2280: 삭제된 함수를 참조하려고 합니다.
};

//CTest::CTest() {}   // 클래스 외부에서 디폴트 생성자 정의

int main() {
    CTest a;
    cout << a.m_nData << endl;

    return 0;
}