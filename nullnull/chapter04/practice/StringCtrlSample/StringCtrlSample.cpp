// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.4 실습 과제3: 복사 생성자와 대입 연산자
// 4.2.3 실습 과제4: 허용되는 변환 적용하기
// 4.3.4 실습 과제5: 이동 생성자 호출

#include "MyString.h"
#include <iostream>

using namespace std;

/*
void testFunc(const CMyString& strParam)
{
    cout << strParam << endl;
}
*/

CMyString testFunc()
{
    CMyString strTest("testFunc() return");
    cout << strTest << endl;

    return strTest;
}

int main()
{
/*
    CMyString strData, strTest;
    strData.setString("Hello");
    strTest.setString("World");

    // 복사 생성
    CMyString strNewData(strData);
    cout << strNewData.getString() << endl;

    // 단순 대입 연산자 호출
    strNewData = strTest;
    cout << strNewData.getString() << endl;
*/

    testFunc(); // 이름 없는 임시 객체가 만들어진다.

    return 0;
}
