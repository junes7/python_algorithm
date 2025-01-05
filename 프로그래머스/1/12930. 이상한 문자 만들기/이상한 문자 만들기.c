#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*(strlen(s)+1));
    strcpy(r,s);
    int t;
    for(int i=0;i<strlen(r);i++) {
        if(r[i]==' ')
            t=0;
        else
            r[i]=t++%2==0?toupper(r[i]):tolower(r[i]);
    }
    return r;
}