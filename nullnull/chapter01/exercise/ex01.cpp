// Chapter01 C와는 다른 C++

// 연습 문제

/*
 * 1. 자신의 이름과 나이를 입력받고 "나의 이름은 홍길동이고, 20살입니다."라고 출력하는 프로그램을 작성하세요.
 *    단, 반드시 std::cout, std::cin을 이용해 작성합니다.
 */

#include <iostream>

int main() {
    std::string name;
    unsigned int age;

    std::cout << "이름 입력:";
    std::cin >> name;

    std::cout << "나이 입력:";
    std::cin >> age;

    std::cout << "나의 이름은 " << name << "이고, " << age << "살입니다." << std::endl;

    return 0;
}