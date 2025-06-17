// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.2 깊은 복사와 얕은 복사 - 포인터가 존재했을 때의 얕은 복사

#include <iostream>

using namespace std;

class CMyData {
private:
    int *m_pnData = nullptr;    // 포인터 멤버 데이터

public:
    explicit CMyData(int nParam) {
        cout << "CMyData(int nParam)" << endl;
        m_pnData = new int;
        *m_pnData = nParam;
    }

    CMyData(const CMyData &rhs) {
        cout << "CMyData(const CMyData &)" << endl;

        m_pnData = new int; // 메모리를 할당한다.

        *m_pnData = *rhs.m_pnData;  // 포인터가 가리키는 위치에 값을 복사한다.
    }

    ~CMyData() {    // 객체가 소멸하면 동적 할당한 메모리를 해제한다. -> 해제된 메모리를 다시 한 번 더 해제하는 문제 발생
        delete m_pnData;
    }

    int getData() const { return *m_pnData; }
};

int main() {
    CMyData a{10};
    CMyData b{a};   // 깊은 복사를 수행할 별도의 복사 생성자가 없다면 컴파일러가 만들어 넣은 복사 생성자가 작동 -> 메모리 누수

    cout << a.getData() << endl;
    cout << b.getData() << endl;

    return 0;
}