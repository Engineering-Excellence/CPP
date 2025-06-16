// Chapter03 클래스

// 3.4 메서드

// 3.4.6 멤버 함수 다중 정의 - delete 예약어를 사용해 컴파일 오류 발생

#include <iostream>

using namespace std;

class CMyData {
private:
    int m_nData;

public:
    CMyData() : m_nData{0} {};

    int getData() const { return m_nData; }

    void setData(int nParam) { m_nData = nParam; }

    void setData(double dParam) = delete;   // 실수로 double 자료형 실인수가 넘어오는 경우를 차단한다.
};

int main() {
    CMyData a;
    a.setData(10);  // CMyData::setData(int) 메서드가 호출된다.
    cout << a.getData() << endl;

    CMyData b;
//    b.setData(5.5); // error C2280: ‘void CMyData::setData(double)’: 삭제된 함수를 참조하려고 합니다.
    cout << b.getData() << endl;

    return 0;
}