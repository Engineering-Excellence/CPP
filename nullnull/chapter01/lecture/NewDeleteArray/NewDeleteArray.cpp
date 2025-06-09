// Chapter01 C와는 다른 C++

// 1.5 메모리 동적 할당

// 1.5.1 new와 delete 연산자

#include <iostream>

using namespace std;

int main() {
    int *arr = new int[5];  // 객체를 배열 형태로 동적 생성

    for (auto i{0}; i < 5; ++i)
        arr[i] = (i + 1) * 10;

    for (auto i{0}; i < 5; ++i)
        cout << arr[i] << endl;

    delete[] arr;   // 배열 형태로 생성한 대상은 반드시 배열 형태를 통해 삭제

    return 0;
}