// Chapter04 복사 생성자와 임시 객체

// 4.3 임시 객체와 이동 시맨틱

// 4.3.1 이름 없는 임시 객체

#include <iostream>

using namespace std;

class CTestData
{
    int m_nData = 0;
    char* m_pszName = nullptr; // 변수 이름을 저장하기 위한 멤버

public:
    CTestData(int nParam, char* pszName)
        : m_nData(nParam), m_pszName(pszName)
    {
        cout << "CTestData(int): " << m_pszName << endl;
    }

    ~CTestData()
    {
        cout << "~CTestData(): " << m_pszName << endl;
    }

    CTestData(const CTestData& rhs)
        : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName)
    {
        cout << "CTestData(const CTestData &) : " << m_pszName << endl;
    }

    CTestData& operator=(const CTestData& rhs)
    {
        cout << "operator=" << endl;
        m_nData = rhs.m_nData; // 값은 변경하지만 이름(m_pszName)은 그대로 둔다.

        return *this;
    }

    int getData() const
    {
        return m_nData;
    }

    void setData(int nParam)
    {
        m_nData = nParam;
    }
};

CTestData testFunc(int nParam) // CTestData 객체를 반환하는 함수
{
    CTestData a(nParam, "a"); // CTestData 클래스 인스턴스인 a는 지역변수이므로 함수 반환시 소멸

    return a;
}

int main()
{
    CTestData b(5, "b");
    cout << "*****Before*****" << endl;

    b = testFunc(10); // 함수가 반환되면서 임시 객체가 생성됐다가 대입 연산 후 즉시 소멸한다!
    // testFunc(10);
    // CTestData& rData = testFunc(10);

    cout << "*****After*****" << endl;
    cout << b.getData() << endl;

    return 0;
}
