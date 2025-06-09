// Chapter01 C와는 다른 C++

// 1.6 참조자 형식

// 1.6.1 r-value 참조

#include <iostream>

using namespace std;

int testFunc(int nParam) {
    return nParam * 2;
}

int main() {
    int nInput{0};
    cout << "Input number: ";
    cin >> nInput;

    int &&rData{nInput + 5};   // 산술 연산으로 만들어진 임시 객체에 대한 r-value 참조
    cout << rData << endl;

    int &&result{testFunc(10)};    // 함수 반환으로 만들어진 임시 객체에 대한 r-value 참조

    result += 10;   // 값 변경 가능
    cout << result << endl;

    return 0;
}