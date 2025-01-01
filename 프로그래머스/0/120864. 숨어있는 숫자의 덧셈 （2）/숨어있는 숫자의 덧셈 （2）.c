#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int r=0;
    char* temp=(char*)malloc(sizeof(char)*strlen(my_string));
    char* ch;
    strcpy(temp,my_string);
    for(int i=0;i<strlen(temp);i++) {
        if(isdigit(temp[i])==0)
            temp[i]=' ';
    }
    ch=strtok(temp," ");
    while(ch!=NULL) {
        r+=atoi(ch);
        ch=strtok(NULL," ");
    }
    return r;
}