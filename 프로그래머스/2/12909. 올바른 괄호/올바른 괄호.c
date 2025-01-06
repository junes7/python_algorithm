#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool r=true;
    char* ch=(char*)malloc(sizeof(char)*strlen(s)+1);
    memset(ch,0,sizeof(char)*strlen(s)+1);
    int idx=0;
    for(int i=0;i<strlen(s);i++) {
        if(s[i]=='(') {
            ch[idx++]=s[i];     
        } else {
            if(idx>0 && ch[idx-1]=='(') {
                idx--;
            } else {
                ch[idx++]=s[i];
            }
        }
    }
    r=idx==0?true:false;
    return r;
}