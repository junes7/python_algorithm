#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int l=(n%2==0)?n/2:n/2+1;
    int* r=(int*)malloc(sizeof(int)*l);
    for(int i=0;i<l;i++) {
        r[i]=2*i+1;
    }
    return r;
}