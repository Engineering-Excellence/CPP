// Chapter04 복사 생성자와 임시 객체

// 4.3 임시 객체와 이동 시맨틱

// 4.3.2 r-value 참조

#include <iostream>

using namespace std;

void testFunc(int nParam) // r-value 참조 형식과 호출자 코드가 같다.
{
    cout << "testFunc(int)" << endl;
}

void testFunc(int&& rParam) // r-value 참조 형식
{
    cout << "testFunc(int &&)" << endl;
}

int main()
{
    // testFunc(3 + 4); // 모호한 호출이다. int형과 int&&형 모두 가능하다!

    return 0;
}
