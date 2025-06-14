// Chapter03 클래스

// 3.3 생성자와 소멸자

// 3.3.2 참조 형식 멤버 초기화

#include <iostream>

using namespace std;

class CRefTest {
private:
    int &m_nData;   // 참조형 멤버는 객체가 생성될 때 반드시 초기화해야 한다.

public:
    explicit CRefTest(int &rParam)   // 함수가 반환될 때 매개변수도 소멸하기 때문에 참조자를 이용
            : m_nData{rParam} {}; // 참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.

    int getData() const { return m_nData; }
};

int main() {
    int a{10};
    CRefTest t{a};

    cout << t.getData() << endl;

    a = 20; // 참조 원본인 a의 값이 수정되었다.
    cout << t.getData() << endl;

    return 0;
}