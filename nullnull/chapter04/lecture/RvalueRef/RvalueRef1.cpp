// Chapter04 복사 생성자와 임시 객체

// 4.3 임시 객체와 이동 시맨틱

// 4.3.2 r-value 참조

#include <iostream>

using namespace std;

int main()
{
    int&& data = 3 + 4;
    cout << data << endl;
    data++;
    cout << data << endl;

    return 0;
}
