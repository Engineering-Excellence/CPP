// Chapter03 클래스

// 3.4 메서드

// 3.4.5 상수형 메서드의 예외 사항 - const_cast< >를 사용한 상수형 참조 변경

#include <iostream>

using namespace std;

void testFunc(const int &nParam) {
    int &nNewParam = const_cast<int &>(nParam); // 상수형 참조였으나 일반 참조로 형변환했다.
    nNewParam = 20; // 따라서 l-value가 될 수 있다.
}

int main() {
    int nData = 10;

    testFunc(nData);    // 상수형 참조로 전달하지만 값이 변경된다.

    cout << nData << endl;  // 변경된 값을 출력한다.

    return 0;
}