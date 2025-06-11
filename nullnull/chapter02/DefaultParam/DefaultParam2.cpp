// Chapter02 C++ 함수와 네임스페이스

// 2.1 디폴트 매개변수

#include <iostream>

int testFunc(int, int = 2); // 매개변수의 디폴트 값은 반드시 오른쪽부터 기술!

int main() {
    std::cout << testFunc(10) << std::endl; // 피호출자 함수 매개변수의 실인수는 왼쪽부터 짝을 맞추어 적용(mapping)되며, 짝이 맞지 않는 매개변수는 디폴트 값을 적용
    std::cout << testFunc(10, 5) << std::endl;

    return 0;
}

int testFunc(int nParam1, int nParam2) {
    return nParam1 * nParam2;
}