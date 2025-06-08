// Chapter01 C와는 다른 C++

// 1.3 인스턴스와 입출력 흐름

// 1.3.1 std::cout

#include <iostream>

int main() {
    std::cout << 10 << std::endl;
    std::cout << 10U << std::endl;
    std::cout << 10.5F << std::endl;
    std::cout << 10.5 << std::endl;
    std::cout << 3 + 4 << std::endl;

    return 0;
}