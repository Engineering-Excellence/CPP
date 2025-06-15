// Chapter03 클래스

// 3.3 생성자와 소멸자

// 3.3.3 생성자 다중 정의 - 다른 생성자를 추가로 부르는 생성자 초기화 함수

#include <iostream>

using namespace std;

class CMyPoint {
private:
    int m_x{0};
    int m_y{0};

public:
    explicit CMyPoint(int x) {
        cout << "CMyPoint(int)" << endl;

        if (x > 100)    // x의 값이 100을 초과하면 100으로 설정
            x = 100;

        m_x = x;
    }

    CMyPoint(int x, int y)
            : CMyPoint(x) { // x 값을 검사하는 코드는 이미 존재하므로 재사용
        cout << "CMyPoint(int, int)" << endl;

        if (y > 200)    // y의 값이 200을 초과하면 200으로 설정
            y = 200;

        m_y = y;
    }

    void print() const {
        cout << "X: " << m_x << endl;
        cout << "Y: " << m_y << endl;
    }
};

int main() {
    CMyPoint ptBegin{110};  // 매개변수가 1개인 생성자만 호출
    ptBegin.print();

    CMyPoint ptEnd{150, 250};    // 2개의 생성자를 모두 호출
    ptEnd.print();

    return 0;
}