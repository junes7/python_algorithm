#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* strArr[], size_t strArr_len) {
    int r=0,cnt[31]={0};
    for(int i=0;i<strArr_len;i++)
        cnt[strlen(strArr[i])]+=1;
    for(int i=0;i<sizeof(cnt)/sizeof(int);i++)
        if(r<cnt[i]) r=cnt[i];
    return r;
}