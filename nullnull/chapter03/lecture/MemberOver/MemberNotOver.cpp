// Chapter03 클래스

// 3.4 메서드

// 3.4.6 멤버 함수 다중 정의 - 서로 다른 자료형을 사용한 멤버 함수

#include <iostream>

using namespace std;

void testFunc(int nParam) {
    cout << nParam << endl;
}

int main() {
    testFunc(10);
    testFunc(5.5);  // warning C4244: '인수': 'double'에서 'int'로 변환하면서 데이터가 손실될 수 있습니다.

    return 0;
}