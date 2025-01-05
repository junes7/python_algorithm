#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int r=0,len=strlen(p);
    char* ch=(char*)malloc(sizeof(char)*(len+1));
    memset(ch,0,sizeof(char)*(len+1));
    ch[len]='\0';
    for(int i=0;i<strlen(t)-len+1;i++) {
        strncpy(ch,t+i,len);
        if(atoll(ch)<=atoll(p))
            r+=1;
    }
    return r;
}