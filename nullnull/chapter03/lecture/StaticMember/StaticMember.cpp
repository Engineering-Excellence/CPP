// Chapter03 클래스

// 3.5 정적 멤버

// Multi-threading에서 동시성 문제를 야기하므로 주의 필요

#include <iostream>

using namespace std;

class CTest {
private:
    int m_nData;
    static int m_nCount;    // 정적 멤버 변수 선언(정의는 아니다!)

public:
    CTest(int nParam) : m_nData{nParam} { m_nCount++; }

    int getData() { return m_nData; }

    void resetCount() { m_nCount = 0; }

    static int getCount() { // 정적 메서드 선언 및 정의
        return m_nCount;
    }
};

int CTest::m_nCount = 0;    // CTest 클래스의 정적 멤버 변수 정의(정적 변수는 반드시 선언과 정의를 분리, this 사용 불가)

int main() {
    CTest a{5}, b{10};

    cout << a.getCount() << endl;   // 정적 멤버에 접근
    b.resetCount();

    cout << CTest::getCount() << endl;    // 인스턴스 없이도 정적 멤버에 접근 가능!

    return 0;
}