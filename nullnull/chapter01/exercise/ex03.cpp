// Chapter01 C와는 다른 C++

// 연습 문제

/*
 * 3. char[12] 배열 메모리를 new 연산자로 동적 할당하고 해제하는 코드 예를 작성하세요.
 */

#include <iostream>

int main() {
    char *cArr{new char[12]};   // char 배열 동적 할당

    for (int i{0}; i < 12; ++i) {
        cArr[i] = 65 + i;
        std::cout << cArr[i] << ' ';
    }

    delete[] cArr;  // 배열 메모리 해제

    return 0;
}