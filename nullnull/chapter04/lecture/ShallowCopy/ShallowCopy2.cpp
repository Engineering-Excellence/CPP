// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.3 대입 연산자 - 올바르게 복사 생성자를 사용하는 예제

#include <iostream>

using namespace std;

class CMyData {
private:
    int *m_pnData = nullptr;

public:
    explicit CMyData(int nParam) {
        cout << "CMyData(int nParam)" << endl;
        m_pnData = new int;
        *m_pnData = nParam;
    }

    CMyData(const CMyData &rhs) {   // 복사 생성자 선언 및 정의
        cout << "CMyData(const CMyData &)" << endl;

        m_pnData = new int; // 메모리를 할당한다.

        *m_pnData = *rhs.m_pnData;  // 포인터가 가리키는 위치에 값을 복사한다.
    }

    ~CMyData() {
        delete m_pnData;    // 객체가 소멸하면 동적 할당한 메모리를 해제한다.
    }

    CMyData &operator=(const CMyData &rhs) {    // 단순 대입 연산자 함수를 정의한다.
        cout << "operator=(const CMyData &)" << endl;

        if (this != &rhs)
            *m_pnData = *rhs.m_pnData;

        return *this;   // 객체 자신에 대한 참조를 반환한다.
    }

    int getData() const { return *m_pnData; }
};

int main() {
    CMyData a{10};
    CMyData b{20};

    a = b;  // 단순 대입을 시도하면 기본적으로 얕은 복사가 수행되므로 모든 멤버의 값을 그대로 복사한다.

    cout << a.getData() << endl;
    cout << b.getData() << endl;

    return 0;
}