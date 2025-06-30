// Chapter04 복사 생성자와 임시 객체

// 4.3 임시 객체와 이동 시맨틱

// 4.3.2 r-value 참조

#include <iostream>

using namespace std;

void testFunc(int& rParam)
{
    cout << "testFunc(int &)" << endl;
}

void testFunc(int&& rParam) // r-value 참조 형식
{
    cout << "testFunc(int &&)" << endl;
}

int main()
{
    testFunc(3 + 4); // 3 + 4 연산 결과는 r-value이다.

    return 0;
}
