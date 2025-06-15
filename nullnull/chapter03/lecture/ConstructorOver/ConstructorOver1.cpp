// Chapter03 클래스

// 3.3 생성자와 소멸자

// 3.3.3 생성자 다중 정의

#include <iostream>

using namespace std;

class CMyData {
private:
    int m_nData;

public:
    // 디폴트 생성자는 없다.

    explicit CMyData(int nParam) // 매개변수가 int 1개인 생성자 함수 선언 및 정의
            : m_nData{nParam} {};

    CMyData(int x, int y)   // 매개변수가 int 자료형 2개인 생성자 함수 다중 정의
            : m_nData{x + y} {};

    int getData() const { return m_nData; }
};

int main() {
    CMyData a{10};
    CMyData b{3, 4};

    cout << a.getData() << endl;
    cout << b.getData() << endl;

    return 0;
}