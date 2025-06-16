// Chapter03 클래스

// 연습 문제

#include <iostream>

class CRefTest {
private:
    int &m_nData;

public:
    CRefTest(int &rParam)
            : m_nData{rParam} {}  // 참조형 변수는 반드시 생성자 초기화 목록을 이용해서 초기화해야 함

    int getData() { return m_nData; }
};

int main() {
    int nData = 10;
    CRefTest rt(nData);
    std::cout << rt.getData() << std::endl;

    return 0;
}