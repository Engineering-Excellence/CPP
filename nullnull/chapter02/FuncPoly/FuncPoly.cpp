// Chapter02 C++ 함수와 네임스페이스

// 2.2 함수 다중 정의

// 2.2.1 다중 정의 일반

#include <iostream>

int add(int, int);  // 함수명은 같지만 매개변수 구성이 다름

int add(int, int, int);

double add(double, double);

int main() {
    std::cout << add(3, 4) << std::endl;
    std::cout << add(3, 4, 5) << std::endl;
    std::cout << add(3.3, 4.4) << std::endl;

    return 0;
}

int add(int a, int b) {
    std::cout << "add(int, int)=";

    return a + b;
}

int add(int a, int b, int c) {
    std::cout << "add(int, int, int)=";

    return a + b + c;
}

double add(double a, double b) {
    std::cout << "add(double, double)=";

    return a + b;
}