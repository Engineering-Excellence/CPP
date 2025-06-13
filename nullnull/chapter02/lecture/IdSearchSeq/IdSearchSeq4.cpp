// Chapter02 C++ 함수와 네임스페이스

// 2.5 식별자 검색 순서

/**
 * 전역 함수인 경우
 *
 * 1. 현재 블록 범위
 * 2. 현재 블록 범위를 포함하고 있는 상위 블록 범위(최대 적용 범위는 함수 몸체까지)
 * 3. 가장 최근에 선언된 전역 변수나 함수
 * 4. using 선언된 네임스페이스 혹은 전역 네임스페이스. 단, 두 곳에 동일한 식별자가 존재할 경우 컴파일 오류 발생!
 */

// 2.5.4 using 선언과 전역 변수 - using namespace 선언을 적용하기 전

#include <iostream>

using namespace std;

int nData{100}; // 4. using 선언된 네임스페이스 혹은 전역 네임스페이스

namespace test {
    int nData{200};
}

int main() {
    cout << nData << endl;

    return 0;
}