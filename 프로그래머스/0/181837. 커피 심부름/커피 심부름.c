#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// order_len은 배열 order의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* order[], size_t order_len) {
    int r=0;
    for(int i=0;i<order_len;i++)
        r+=strstr(order[i],"latte")!=0?5000:4500;
    return r;
}