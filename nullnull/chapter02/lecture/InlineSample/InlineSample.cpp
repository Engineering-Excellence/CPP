// Chapter02 C++ 함수와 네임스페이스

// 2.3 인라인 함수

#include <iostream>

#define ADD(a, b) ((a) + (b))   // 매크로: 오버헤드가 적고 빠르지만 자료형 지정 불가

int add(int a, int b) {
    return a + b;
}

inline int addNew(int a, int b) {   // 인라인 함수: 함수의 외형이지만, 내부적으로는 매크로처럼 함수 호출을 하지 않음
    return a + b;
}

int main() {
    int a, b;

    std::cin >> a >> b;

    std::cout << "ADD()=" << ADD(a, b) << std::endl;
    std::cout << "add()=" << add(a, b) << std::endl;
    std::cout << "addNew()=" << addNew(a, b) << std::endl;

    return 0;
}