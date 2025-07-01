// Chapter04 복사 생성자와 임시 객체

// 4.3 임시 객체와 이동 시맨틱

// 4.3.3 이동 시맨틱

#include <iostream>

using namespace std;

class CTestData
{
private:
    int m_nData = 0;

public:
    CTestData() { cout << "CTestData()" << endl; }
    ~CTestData() { cout << "~CTestData()" << endl; }

    CTestData(const CTestData& rhs)
        : m_nData(rhs.m_nData)
    {
        cout << "CTestData(const CTestData &)" << endl;
    }

    CTestData(CTestData&& rhs) noexcept // 이동 생성자
        : m_nData(rhs.m_nData)
    {
        cout << "CTestData(CTestData &&)" << endl;
    }

    CTestData& operator=(const CTestData&) = default;

    int getData() const { return m_nData; }
    void setData(int nParam) { m_nData = nParam; }
};

CTestData testFunc(int nParam)
{
    cout << "**testFunc(): Begin**" << endl;
    CTestData a;
    a.setData(nParam);
    cout << "***testFunc(): End***" << endl;

    return a;
}

int main()
{
    CTestData b;
    cout << "********Before********" << endl;
    b = testFunc(20);
    cout << "********After*********" << endl;
    CTestData c(b);

    return 0;
}
