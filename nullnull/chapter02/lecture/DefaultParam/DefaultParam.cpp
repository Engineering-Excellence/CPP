// Chapter02 C++ 함수와 네임스페이스

// 2.1 디폴트 매개변수

#include <iostream>

// Callee
int testFunc(int = 10); // 함수 원형의 선언 부분에 디폴트 값을 기술해야 함(함수 원형의 변수명 생략 가능)

// Caller
int main() {
    std::cout << testFunc() << std::endl;   // 호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용

    std::cout << testFunc(20) << std::endl; // 호출자가 실인수를 확정했으므로 디폴트 값을 무시

    return 0;
}

int testFunc(int nParam) {
    return nParam;
}