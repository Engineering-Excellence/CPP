// Chapter02 C++ 함수와 네임스페이스

// 2.2 함수 다중 정의

// 2.2.2 다중 정의와 모호성

#include <iostream>

void testFunc(int);

void testFunc(int, int = 10);

int main() {
//    testFunc(5);    // error C2668: 오버로드된 함수 ‘testFunc(int)’에 대한 호출이 모호합니다. -> 함수 호출시 오류 발생(다중 정의 자체는 오류 X)

    return 0;
}

void testFunc(int a) {
    std::cout << "testFunc(int)" << std::endl;
}

void testFunc(int a, int b) {
    std::cout << "testFunc(int, int)" << std::endl;
}