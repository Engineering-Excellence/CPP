// Chapter02 C++ 함수와 네임스페이스

// 2.4 네임스페이스

// 2.4.1 네임스페이스

#include <iostream>

namespace test {
    int g_nData{100};

    void testFunc() {
        std::cout << "test::testFunc()" << std::endl;
    }
}

int main() {
    test::testFunc();
    std::cout << test::g_nData << std::endl;


    return 0;
}