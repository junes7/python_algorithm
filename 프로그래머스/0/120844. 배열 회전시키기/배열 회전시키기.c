#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(int numbers[], size_t numbers_len, const char* direction) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*numbers_len);
    memset(r,0,sizeof(int)*numbers_len);
    int idx=0;
    if(strcmp(direction,"left")==0) {
        for(int i=1;i<numbers_len;i++)
            r[idx++]=numbers[i];
        r[idx++]=numbers[0];
    } else {
        r[idx++]=numbers[numbers_len-1];
        for(int i=0;i<numbers_len-1;i++)
            r[idx++]=numbers[i];
    }
    return r;
}