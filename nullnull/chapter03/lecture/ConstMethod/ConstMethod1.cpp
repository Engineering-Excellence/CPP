// Chapter03 클래스

// 3.4 메서드

// 3.4.3 상수형 메서드

#include <iostream>

using namespace std;

class CTest {
private:
    int m_nData;

public:
    explicit CTest(int nParam) : m_nData(nParam) {};

    ~CTest() = default;

    int getData() const {   // 멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없다.
//        setData(20);    // error C2662: 'this' 포인터를 'const CTest *'에서 'CTest *'로 변환할 수 없습니다.
//        m_nData = 20;   // error C3490: 'm_nData'는 const 개체를 통해 액세스되고 있으므로 수정할 수 없습니다.
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