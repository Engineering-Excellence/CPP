// Chapter01 C와는 다른 C++

// 1.7 범위 기반 for문

#include <iostream>

using namespace std;

int main() {
    int aList[5]{10, 20, 30, 40, 50};

    for (int i = 0; i < sizeof(aList) / sizeof(int); ++i)   // C style 반복문
        printf("%d ", aList[i]);
    puts("");

    for (auto n: aList) // 범위 기반 C++11 style 반복문: 각 요소의 값을 n에 복사한다.
        cout << n << ' ';
    cout << endl;

    for (auto &n: aList)    // n은 각 요소에 대한 참조다.
        cout << n << ' ';
    cout << endl;

    return 0;
}