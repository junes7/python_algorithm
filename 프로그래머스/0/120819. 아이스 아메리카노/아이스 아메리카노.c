#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*2);
    // method1 array element
    // r[0]=money/5500;
    // r[1]=money%5500;
    // method2 pointer
    *r=money/5500;
    *(r+1)=money%5500;
    return r;
}