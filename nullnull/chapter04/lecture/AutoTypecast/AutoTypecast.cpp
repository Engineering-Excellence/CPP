// Chapter04 복사 생성자와 임시 객체

// 4.2 묵시적 변환

// 4.2.2 허용되는 변환

#include <iostream>

using namespace std;

class CTestData {
private:
    int m_nData = 0;
public:
    explicit CTestData(int nParam)
            : m_nData(nParam) {}

    /*explicit*/ operator int() const { return m_nData; }  // CTestData 클래스는 int 자료형으로 변환될 수 있다!

    int getData() const { return m_nData; }

    void setData(int nParam) { m_nData = nParam; }
};

int main() {
    CTestData a(10);
    cout << a.getData() << endl;

    // CTestData 형식에서 int 자료형으로 변환될 수 있다.
    cout << a << endl;  // explicit 선언시 -> error C2678: 이항 '<<' 왼쪽 피연산자로 'std::ostream' 형식을 사용하는 연산자가 없거나 허용되는 변환이 없습니다.
    cout << (int) a << endl;    // C style 형변환: int 자료형으로 형변환할 수 없는 객체도 무조건 강제 변환을 성공시킴
    cout << static_cast<int>(a) << endl;    // C++ style 형변환

    return 0;
}