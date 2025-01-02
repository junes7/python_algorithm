#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int r=0,before=0;
    char* temp=strtok(s," ");
    while(temp!=NULL) {
        if(strcmp(temp,"Z")==0) {
            r-=before;
        } else {
            r+=atoi(temp);
            before=atoi(temp);
        }
        temp=strtok(NULL," ");
    }
    return r;
}