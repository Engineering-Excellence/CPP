// Chapter03 클래스

// 3.3 생성자와 소멸자 - 디폴트 생성자의 생략

#include <iostream>

using namespace std;

class CTest {
private:
    int m_nData;

public:
    explicit CTest(int nParam)
            : m_nData{nParam} { // 생성자의 매개변수로 전달된 값으로 멤버 변수를 초기화한다.
        cout << "CTest::CTest()" << endl;
    }

    ~CTest() {
        cout << "~CTest::CTest() " << m_nData << endl;  // 생성할 때 매개변수로 받은 값을 출력한다.
    }
};

int main() {
    cout << "Begin" << endl;
    CTest a{1};
    cout << "Before b" << endl;
    CTest b{2};
    cout << "End" << endl;

    return 0;
}   // 지역 변수는 stack에 저장되므로 나중에 생성된 b가 먼저 소멸