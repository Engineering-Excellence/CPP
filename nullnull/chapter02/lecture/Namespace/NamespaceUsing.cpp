// Chapter02 C++ 함수와 네임스페이스

// 2.4 네임스페이스

// 2.4.2 using 선언

#include <iostream>

using namespace std;    // std 네임스페이스를 using 예약어로 선언

namespace test {
    int g_nData{100};

    void testFunc() {
        cout << "test::testFunc()" << endl; // cout에 대해서 범위를 지정하지 않아도 무관
    }
}

using namespace test;   // test 네임스페이스에 using 선언

int main() {
    // testFunc()나 g_nData에도 범위 지정을 할 필요가 없음
    testFunc();
    cout << g_nData << endl;

    return 0;
}