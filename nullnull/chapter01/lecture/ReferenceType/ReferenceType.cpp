// Chapter01 C와는 다른 C++

// 1.6 참조자 형식

// 1.6.1 참조형 변수 선언과 정의 - 참조형 변수 사용

#include <iostream>

using namespace std;

int main() {
    int nData{10};
    int eData{-1};

//    auto &ref;   // 반드시 초기화해야 사용 가능
    auto &ref{nData};   // nData 변수에 대한 참조자 선언: 참조자는 '별명'이다! -> int *const ref = &nData; // 참조자의 실체: 주소가 변하지 않는 포인터
//    &ref = eData;   // 초기화 후에는 재할당 불가

    ref = 20;   // 참조자의 값을 변경하면 원본도 변경된다!
    cout << nData << endl;
    cout << &nData << endl; // 주소 동일
    cout << &ref << endl;

    int *pnData = &nData;    // 포인터를 쓰는 것과 비슷하지만, 포인터는 변수라는 점에서 문제가 발생(다른 변수의 값이 바뀔 수 있음)
    *pnData = 30;
    cout << nData << endl;

    return 0;
}