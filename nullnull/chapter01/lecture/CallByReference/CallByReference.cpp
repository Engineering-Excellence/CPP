// Chapter01 C와는 다른 C++

// 1.6 참조자 형식

// 1.6.1 참조형 변수 선언과 정의 - 참조에 의한 호출

#include <iostream>

using namespace std;

void testFunc(int &rParam) {    // 매개변수가 int에 대한 참조 형식
    rParam = 100;   // 피호출자 함수에서 원본의 값을 변경
}

int main() {
    int nData{0};

    testFunc(nData);    // 참조에 의한 인수 전달
    cout << nData << endl;

    return 0;
}