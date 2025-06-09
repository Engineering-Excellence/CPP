// Chapter01 C와는 다른 C++

// 1.6 참조자 형식

// 1.6.1 참조형 변수 선언과 정의 - 참조 전달

#include <iostream>

using namespace std;

void swap(int &a, int &b) {    // 참조 전달이므로 호출자 변수의 값을 변경 가능
    int nTmp{a};
    a = b;
    b = nTmp;
}

int main() {
    int x{10}, y{20};

    swap(x, y); // 참조 전달이며, 두 변수의 값을 교환

    cout << x << endl;  // 교환된 결과를 출력
    cout << y << endl;

    return 0;
}