// Chapter01 C와는 다른 C++

// 1.3 인스턴스와 입출력 흐름

// 1.3.1 std::cout

#include <iostream>

int main() {
    std::string strData = "Test string";
    std::cout << "Sample string" << std::endl;
    std::cout << strData << std::endl;

    strData = "New string";
    std::cout << strData << std::endl;

    std::cout << "저는 " << 99 << "살" << "입니다." << std::endl;

    return 0;
}