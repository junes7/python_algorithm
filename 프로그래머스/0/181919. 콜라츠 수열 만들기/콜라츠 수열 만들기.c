#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*1000);
    int i=0;
    r[i]=n;
    while(n>1) {
        n=n%2==0?n/2:3*n+1;
        r[++i]=n;
    }
    return r;
}