#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int r=0;
    bool flag;
    for(int i=0;i<strlen(myString)-strlen(pat)+1;i++) {
        flag=true;
        for(int j=0;j<strlen(pat);j++) {
            if(myString[i+j]!=pat[j]) {
                flag=false;
                break;
            }
        }
        if(flag)
            r+=1;
    }
    return r;
}