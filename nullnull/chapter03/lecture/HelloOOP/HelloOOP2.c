// Chapter03 클래스

// 3.1 객체지향 프로그래밍 개요

#include <stdio.h>

// 제작자의 코드
typedef struct userdata {
    int nAge;
    char szName[32];
} userdata;

void printData(userdata *pUser) {
    printf("%d, %s\n", pUser->nAge, pUser->szName);
}

// 사용자의 코드
int main(void) {
    userdata user = {20, "철수"};
//    printf("%d, %s\n", user.nAge, user.szName); // 1단계
    printData(&user);   // 2단계

    return 0;
}