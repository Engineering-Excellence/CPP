// Chapter02 C++ 함수와 네임스페이스

// 연습 문제

#include <iostream>

using namespace std;

int nData{200};

namespace test {
    int nData{100};

    void testFunc() {
        cout << nData << endl;
    }
}

using namespace test;

int main() {
    testFunc();
    ::testFunc();
    test::testFunc();

    return 0;
}