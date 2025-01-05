#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a-*(int*)b;
}

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*(numbers_len*200));
    memset(r,0,sizeof(int)*(numbers_len*200));
    bool flag;
    int idx=0;
    for(int i=0;i<numbers_len-1;i++) {
        for(int j=i+1;j<numbers_len;j++) {
            flag=true;
            for(int k=0;k<idx;k++) {
                if(r[k]==numbers[i]+numbers[j]) {
                    flag=false;
                    break;
                }
            }
            if(flag)
                r[idx++]=numbers[i]+numbers[j];
        }
    }
    qsort(r,idx,sizeof(int),compare);
    return r;
}