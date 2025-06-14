// Chapter03 클래스

// 3.3 생성자와 소멸자

// 3.3.1 동적 객체의 생성과 소멸 - new와 delete 연산자 사용

#include <iostream>

using namespace std;

class CTest {
    int m_nData{};

public:
    CTest() {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest() {
        cout << "~CTest::CTest()" << endl;
    }
};

int main() {
    cout << "Begin" << endl;

//    auto *pData = new CTest;   // new 연산자를 이용해 동적으로 객체를 생성: 생성자 자동 호출
    auto *pData = new CTest[3];   // 배열로 new 연산을 수행 가능
    cout << "test" << endl;

//    delete pData;   // delete 연산자를 이용해 객체를 삭제: 소멸자 자동 호출
    delete[] pData;   // 배열로 생성한 객체는 반드시 배열로 삭제! (배열로 삭제하지 않으면 Memory Leak 버그 발생)
    cout << "End" << endl;

    return 0;
}