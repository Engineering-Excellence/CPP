// Chapter02 C++ 함수와 네임스페이스

// 2.2 함수 다중 정의

// 2.2.3 함수 템플릿

#include <iostream>

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << add<int>(3, 4) << std::endl;
    std::cout << add(3.3, 4.4) << std::endl;

    return 0;
}