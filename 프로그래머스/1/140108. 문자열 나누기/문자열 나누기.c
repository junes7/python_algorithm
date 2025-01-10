#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int r=1,eq=1,neq=0;
    char ch=s[0];
    for(int i=1;i+1<strlen(s);i++) {
        if(ch==s[i])
            eq++;
        else
            neq++;
        if(eq==neq) {
            eq=1;
            neq=0;
            r+=1;
            ch=s[++i];
        }
    }
    return r;
}