#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    char* st=(char*)malloc(sizeof(char)*(strlen(myString)+1));
    for(int i=0;i<strlen(myString);i++)
        st[i]=(myString[i]=='A')?'B':'A';
    int r=strstr(st,pat)!=NULL?1:0;
    return r;
}