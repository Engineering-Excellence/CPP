// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.2 깊은 복사와 얕은 복사 - 포인터가 없는 복사 생성자 사용

#include <iostream>

using namespace std;

class CMyData {
private:
    int m_nData = 0;

public:
    CMyData() { cout << "CMyData()" << endl; }

    int getData() const { return m_nData; }

    void setData(int nParam) { m_nData = nParam; }
};

int main() {
    CMyData a;  // 디폴트 생성자가 호출되는 경우
    a.setData(10);

    CMyData b{a};   // 복사 생성자가 호출되는 경우: 포인터를 사용하는 복사 생성자의 선언과 정의가 없으므로 문제 없이 실행
    cout << b.getData() << endl;

    return 0;
}