#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* r=(int*)malloc(sizeof(int)*11);
    memset(r,0,sizeof(int)*11);
    char ch[11];
    sprintf(ch,"%lld",n);
    for(int i=0;i<strlen(ch);i++)
        r[i]=ch[strlen(ch)-1-i]-48;
    return r;
}