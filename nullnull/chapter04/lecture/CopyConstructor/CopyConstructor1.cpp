// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자 - 복사 생성자 선언 및 정의

#include <iostream>

using namespace std;

class CMyData {
private:
    int m_nData = 0;

public:
    CMyData() { cout << "CMyData()" << endl; }

    CMyData(const/* 복사시 원본 손상 방지 */ CMyData &rhs/* R-value */) // 복사 생성자 선언 및 정의
//            : m_nData{rhs.m_nData}
    {
        this->m_nData = rhs.m_nData;
        cout << "CMyData(const CMyData &)" << endl;
    }

    int getData() const { return m_nData; }

    void setData(int nParam) { m_nData = nParam; }
};

int main() {
    CMyData a;  // 디폴트 생성자가 호출되는 경우
    a.setData(10);

    CMyData b{a};   // 복사 생성자가 호출되는 경우
    cout << b.getData() << endl;

    return 0;
}