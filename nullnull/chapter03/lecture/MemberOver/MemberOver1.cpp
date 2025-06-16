// Chapter03 클래스

// 3.4 메서드

// 3.4.6 멤버 함수 다중 정의

#include <iostream>

using namespace std;

class CMyData {
private:
    int m_nData;

public:
    CMyData() : m_nData{0} {};

    int getData() const { return m_nData; }

    void setData(int nParam) { m_nData = nParam; }

    void setData(double dParam) {   // 매개변수가 double 자료형인 경우로 다중 정의했다.
        m_nData = 0;
    }
};

int main() {
    CMyData a;
    a.setData(10);  // CMyData::setData(int) 메서드가 호출된다.
    cout << a.getData() << endl;

    CMyData b;
    b.setData(5.5); // CMyData::setData(double) 메서드가 호출된다.
    cout << b.getData() << endl;

    return 0;
}