#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int x,int y) {
    return x%y==0?y:gcd(y,x%y);
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*2);
    int numer=numer1*denom2+numer2*denom1, denom=denom1*denom2;
    r[0]=numer/gcd(numer,denom);
    r[1]=denom/gcd(numer,denom);
    return r;
}