// Chapter01 C와는 다른 C++

// 1.4 자료형

#include <iostream>

int main() {
    // 1.4.1 변수 선언 및 정의
    int a = 10; // C style
    int b{a};   // C++ style
    int{5};   // 이름이 없는 인스턴스 선언도 가능(숫자이므로 컴파일시 상수 처리)

    // 1.4.2 auto
    auto c{b};  // 초깃값의 형식에 맞춰 선언하는 인스턴스의 형식이 자동으로 결정

    std::cout << a + b + c << std::endl;

    return 0;
}