#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    char* temp=(char*)malloc(sizeof(char)*strlen(myString));
    char* tar=(char*)malloc(sizeof(char)*strlen(pat));
    for(int i=0;i<strlen(myString);i++)
        temp[i]=tolower(myString[i]);
    temp[strlen(myString)]='\0';
    for(int i=0;i<strlen(pat);i++)
        tar[i]=tolower(pat[i]);
    tar[strlen(pat)]='\0';
    int r=strstr(temp,tar)!=NULL?1:0;
    return r;
}