#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rsp) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*strlen(rsp));
    for(int i=0;i<strlen(rsp);i++) {
        r[i]=(rsp[i]=='2')?'0':(rsp[i]=='0')?'5':'2';
    }
    r[strlen(rsp)]='\0';
    return r;
}