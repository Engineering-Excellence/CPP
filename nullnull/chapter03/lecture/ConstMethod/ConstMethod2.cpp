// Chapter03 클래스

// 3.4 메서드

// 3.4.5 상수형 메서드의 예외 사항 - mutable 예약어

#include <iostream>

using namespace std;

class CTest {
private:
    mutable int m_nData{0};

public:
    explicit CTest(int nParam) : m_nData(nParam) {};

    ~CTest() = default;

    int getData() const {   // 상수형 메서드로 선언 및 정의했다.
        m_nData = 20;   // 상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있다.
        return m_nData;
    }

    void setData(int nParam) {
        m_nData = nParam;
    }
};

int main() {
    CTest a{10};
    cout << a.getData() << endl;

    return 0;
}