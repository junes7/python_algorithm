#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void *b) {
    return strcmp((char*)a,(char*)b);
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int r=1;
    qsort(before,strlen(before),sizeof(char),compare);
    qsort(after,strlen(after),sizeof(char),compare);
    for(int i=0;i<strlen(before);i++) {
        if(before[i]!=after[i]) {
            r=0;
            break;
        }
    }
    return r;
}