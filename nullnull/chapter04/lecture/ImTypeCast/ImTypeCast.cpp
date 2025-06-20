// Chapter04 복사 생성자와 임시 객체

// 4.2 묵시적 변환

// 4.2.1 변환 생성자

#include <iostream>

using namespace std;

class CTestData {
private:
    int m_nData = 0;
public:
    /*explicit*/ CTestData(int nParam)   // 매개변수가 하나뿐인 생성자는 형변환이 가능하다. -> explicit: 묵시적으로는 불가능하도록 차단
            : m_nData(nParam) {
        cout << "CTestData(int)" << endl;
    }

    CTestData(const CTestData &rhs)
            : m_nData(rhs.m_nData) {
        cout << "CTestData(const CTestData &)" << endl;
    }

    ~CTestData() {
        cout << "~CTestData()" << endl;
    }

    int getData() const { return m_nData; }

    void setData(int nParam) { m_nData = nParam; }
};

//void testFunc(CTestData param) {    // 매개변수가 클래스 형식이며 변환 생성이 가능: param -> param(int)
void testFunc(const CTestData &param) { // 매개변수가 클래스에 대한 참조 형식이며 묵시적으로 변환 생성된다.
    cout << "testFunc(): " << param.getData() << endl;
}

int main() {
    cout << "*****Begin*****" << endl;

    testFunc(5);    // int 자료형에서 CTestData 형식으로 변환 가능: testFunc(5) -> testFunc(CTestData(5))

    cout << "******End******" << endl;

    return 0;
}