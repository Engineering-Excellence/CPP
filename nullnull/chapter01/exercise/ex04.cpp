// Chapter01 C와는 다른 C++

// 연습 문제

/*
 * 4. int에 대한 참조 형식을 매개변수로 받고 두 변수의 값을 교환하는 함수를 작성하세요.
 *    함수 원형은 void swap(int &a, int &b)입니다.
 */

#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main() {
    int a, b;

    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    swap(a, b);

    cout << "a=" << a << ", b=" << b << endl;

    return 0;
}

void swap(int &a, int &b) {
    int tmp{a};
    a = b;
    b = tmp;
}