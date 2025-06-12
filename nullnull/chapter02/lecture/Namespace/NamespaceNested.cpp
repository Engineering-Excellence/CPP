// Chapter02 C++ 함수와 네임스페이스

// 2.4 네임스페이스

// 2.4.3 네임스페이스의 중첩

#include <iostream>

using namespace std;

namespace test {
    int g_nData{100};

    namespace dev {
        int g_nData{200};

        namespace win {
            int g_nData{300};
        }
    }
}

int main() {
    // 변수명이 같지만 네임스페이스에 따라 전혀 다른 3개의 전역 변수
    cout << test::g_nData << endl;
    cout << test::dev::g_nData << endl;
    cout << test::dev::win::g_nData << endl;

    return 0;
}