// Chapter04 복사 생성자와 임시 객체

// 4.1 복사 생성자

// 4.1.1 함수 호출과 복사 생성자 - 매개변수로 사용되는 복사 생성자

#include <iostream>

using namespace std;

class CTestData {
private:
    int m_nData = 0;

public:
    explicit CTestData(int nParam) : m_nData(nParam) { cout << "CTestData(int)" << endl; }

    CTestData(const CTestData &rhs) : m_nData(rhs.m_nData) { cout << "CTestData(const CTestData &)" << endl; }
//    CTestData(const CTestData &rhs) = delete;   // 해결방법1: 복사 생성자를 아예 삭제함으로써 복사 생성을 막는다.

    int getData() const { return m_nData; } // 읽기 전용인 상수형 메서드

    void setData(int nParam) { m_nData = nParam; }  // 멤버 변수에 쓰기를 시도하는 메서드
};

//void testFunc(CTestData param) {
void testFunc(CTestData &param) {   // 해결방법2: 매개변수가 CTestData 클래스의 '참조' 형식이므로 객체가 생성되지 않는다!
    cout << "testFunc()" << endl;

    param.setData(20);  // 피호출자 함수에서 매개변수 인스턴스의 값을 변경한다.
}

int main() {
    cout << "*****Begin*****" << endl;

    CTestData a{10};    // CTestData(int) 객체 생성
    testFunc(a);    // 문제점: 호출자의 a를 원본으로 두고 CTestData a 매개변수 복사본 객체 생성

    cout << "a: " << a.getData() << endl;   // 함수 호출 후 a의 값을 출력한다.

    cout << "******End******" << endl;

    return 0;
}