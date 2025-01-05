#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=0,idx=0;
    char ch[8];
    memset(ch,0,8);
    while(n>0) {
        ch[idx++]=n%3+48;
        n/=3;
    }
    for(int i=idx-1;i>=0;i--)
        r+=(ch[i]-48)*pow(3,idx-1-i);
    return r;
}