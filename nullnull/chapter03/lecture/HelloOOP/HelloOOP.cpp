// Chapter03 클래스

// 3.2 클래스 기본 문법 - 클래스를 이용해 객체지향 프로그램으로 변경

#include <iostream>

using namespace std;

// 제작자의 코드
class userdata {
public:
    // 멤버 변수 선언
    int nAge;
    string szName;

    // 생성자
    userdata()
            : nAge{0}, szName{""} {}

    userdata(int age, const string &name)
            : nAge{age}, szName{name} {}

    // 멤버 함수 선언 및 정의
    void print() const {
        cout << /*this->*/nAge << ", " << /*this->*/szName << endl; // nAge와 szName은 print() 함수의 지역 변수가 아니다!
    }
};

// 사용자의 코드
int main() {
    userdata user{20, "철수"};
//    printf("%d, %s\n", user.nAge, user.szName); // 1단계
//    printData(&user);   // 2단계
//    user.print(&user);  // 3단계
    user.print();  // 4단계: C++에서 가능

    return 0;
}