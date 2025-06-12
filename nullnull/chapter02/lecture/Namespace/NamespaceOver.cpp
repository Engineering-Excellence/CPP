// Chapter02 C++ 함수와 네임스페이스

// 2.4 네임스페이스

// 2.4.4 네임스페이스와 다중 정의

#include <iostream>

using namespace std;

void testFunc() {   // 전역(개념상 무소속)
    cout << "::testFunc()" << endl;
}

namespace test {
    void testFunc() {   // test 네임스페이스 소속
        cout << "test::testFunc()" << endl;
    }
}

namespace myData {
    void testFunc() {   // myData 네임스페이스 소속
        cout << "myData::testFunc()" << endl;
    }
}

// error C2668: 오버로드된 함수 ‘testFunc()’에 대한 호출이 모호합니다.
//using namespace test;
//using namespace myData;

int main() {
    testFunc(); // 묵시적 전역
    ::testFunc();   // 명시적 전역
    test::testFunc();
    myData::testFunc();

    return 0;
}