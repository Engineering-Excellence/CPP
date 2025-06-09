// Chapter01 C와는 다른 C++

// 연습 문제

/*
 * 6. 다음과 같은 int 배열을 오름차순으로 정렬한 후 화면에 결과를 출력하는 프로그램을 작성하세요. 정렬 방법은 상관없습니다.
 *    단, 화면에 배열 내용을 출력할 때는 반드시 '범위 기반 for문'을 사용해야 합니다.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int aList[5]{10, 30, 20, 50, 40};

    sort(begin(aList), end(aList));

    for (auto i: aList)
        cout << i << " ";

    return 0;
}