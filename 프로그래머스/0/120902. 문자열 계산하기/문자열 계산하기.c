#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int r=0;
    char* temp=strtok(my_string," ");
    r=atoi(temp);
    while(temp!=NULL) {
        if(strcmp("+",temp)==0) {
            temp=strtok(NULL," ");
            r+=atoi(temp);
        } else if(strcmp("-",temp)==0) {
            temp=strtok(NULL," ");
            r-=atoi(temp);
        } else {
            temp=strtok(NULL," ");    
        }
    }
    return r;
}