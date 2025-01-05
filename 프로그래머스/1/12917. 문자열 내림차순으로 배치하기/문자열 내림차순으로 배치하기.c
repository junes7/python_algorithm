#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return strcmp((char*)b,(char*)a);
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=strlen(s);
    char* r=(char*)malloc(sizeof(char)*(len+1));
    memset(r,0,sizeof(char)*(len+1));
    strcpy(r,s);
    qsort(r,strlen(r),sizeof(char),compare);
    return r;
}