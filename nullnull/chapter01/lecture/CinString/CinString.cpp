// Chapter01 C와는 다른 C++

// 1.3 인스턴스와 입출력 흐름

// 1.3.1 std::cin

#include <iostream>

int main() {
    int nAge;
    std::cout << "나이를 입력하세요." << std::endl;
    std::cin >> nAge;

    char szJob[32]; // 한글 16자 제한
    std::cout << "직업을 입력하세요." << std::endl;
    std::cin >> szJob;

    std::string strName;    // 글자 무제한
    std::cout << "이름을 입력하세요." << std::endl;
    std::cin >> strName;

    std::cout << "당신의 이름은 " << strName << "이고, "
              << "나이는 " << nAge << "살이며, "
              << "직업은 " << szJob << "입니다." << std::endl;

    return 0;
}