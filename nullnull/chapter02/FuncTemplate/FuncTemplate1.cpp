// Chapter02 C++ 함수와 네임스페이스

// 2.2 함수 다중 정의

// 2.2.3 함수 템플릿

#include <iostream>

template<typename T>    // 템플릿 함수: 사용자 코드에 의해 컴파일러가 다중 정의 코드를 생성
T testFunc(T a) {
    std::cout << "매개변수 a=" << a << std::endl;

    return a;
}

int main() {
    std::cout << "int\t" << testFunc(3) << std::endl;
    std::cout << "double\t" << testFunc(3.3) << std::endl;
    std::cout << "char\t" << testFunc('A') << std::endl;
    std::cout << "char*\t" << testFunc("testString") << std::endl;

    return 0;
}