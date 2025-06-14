// Chapter03 클래스

// 3.2 클래스 기본 문법

// 3.2.2 접근 제어 지시자 - 객체 내부 멤버 변수의 임의 접근 차단

#include <iostream>

using namespace std;

class CMyData {
    int m_nData;    // 기본 접근 제어 지시자는 private

public:
    int getData() const { return m_nData; }

    void setData(int nParam) { m_nData = nParam; }
};

int main() {
    CMyData data;
    data.setData(10);
    cout << data.getData() << endl;

    return 0;
}