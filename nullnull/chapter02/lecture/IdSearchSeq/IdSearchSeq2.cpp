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

// 2.5.2 상위 블록 범위

#include <iostream>

using namespace std;

int main() {
    int nInput{0};  // 2. 현재 블록 범위를 포함하고 있는 상위 블록 범위로 검색 확장

    cout << "11 이상의 정수를 입력하세요:";
    cin >> nInput;

    if (nInput > 10) {
        cout << nInput << endl; // 현재 블록에서 식별자 선언을 찾지 못함
        return 0;
    } else {
        cerr << "Error" << endl;
        return 1;
    }
}