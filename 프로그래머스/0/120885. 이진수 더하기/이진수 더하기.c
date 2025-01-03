#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int twoToTen(int num) {
    int re=0,mul=1;
    while(num>0) {
        if(num%10==1) re+=mul;
        mul*=2;
        num/=10;
    }
    return re;
}


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* bin1, const char* bin2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*11);
    memset(r,0,sizeof(char)*11);
    int n=twoToTen(atoi(bin1))+twoToTen(atoi(bin2)),idx=0,t;
    if(n==0)
        r[idx++]='0';
    while(n>0) {
        r[idx++]=n%2==1?'1':'0';
        n/=2;
    }
    r[idx]='\0';
    for(int i=0;i<idx/2;i++) {
        t=r[i];
        r[i]=r[idx-1-i];
        r[idx-1-i]=t;
    }
    return r;
}