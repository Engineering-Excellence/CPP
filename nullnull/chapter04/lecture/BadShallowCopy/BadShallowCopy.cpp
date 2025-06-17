// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.2 깊은 복사와 얕은 복사 - 얕은 복사의 문제점

#include <iostream>

using namespace std;

int main() {
    int *pA, *pB;   // 그'들'

    pA = new int;   // 한 친구의 그녀 탄생
    *pA = 10;

    pB = new int;   // 자기 여자 친구 놔두고 친구의 친구를 마음에 담은 바보
//    pB = pA;    // 얕은 복사
    *pB = *pA;  // 문제 해결: 포인터가 가리키고 있는 메모리의 내용이 복사된다.

    // 그렇게 모두 잘 지내는 것처럼 보인다.
    cout << *pA << endl;
    cout << *pB << endl;

    // 그럼 이건?
    delete pA;
    delete pB;

    return 0;
}