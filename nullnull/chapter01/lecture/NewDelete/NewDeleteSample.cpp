// Chapter01 C와는 다른 C++

// 1.5 메모리 동적 할당

// 1.5.1 new와 delete 연산자

#include <iostream>

int main() {
    // C
    int *pOldData = (int *) malloc(sizeof(int));    // 동적 할당
    *pOldData = 3;
    printf("%d\n", *pOldData);
    free(pOldData); // 메모리 해제

    // C++
    int *pData = new int;    // 인스턴스만 동적으로 생성 및 생성자 호출
    int *pNewData = new int(10);    // 초깃값을 기술하는 경우
    *pData = 5;
    std::cout << *pData << std::endl;
    std::cout << *pNewData << std::endl;
    delete pData;   // 메모리 해제 및 소멸자 호출
    delete pNewData;

    return 0;
}