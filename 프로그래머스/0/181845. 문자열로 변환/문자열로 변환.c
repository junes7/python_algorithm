#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*5);
    int t=0;
    while(n>0) {
        r[t++]=n%10+48;
        n/=10;
    }
    r[t]='\0';
    for(int i=0;i<strlen(r)/2;i++){
        t=r[i];
        r[i]=r[strlen(r)-1-i];
        r[strlen(r)-1-i]=t;
    }
    return r;
}