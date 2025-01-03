#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*arr_len);
    memset(r,0,sizeof(int)*arr_len);
    int idx=0;
    for(int i=0;i<arr_len;i++) {
        if(!idx) {
            r[idx++]=arr[i];
        } else {
            if(r[idx-1]==arr[i])
                idx--;
            else
                r[idx++]=arr[i];
        }
    }
    if(!idx)
        r[idx]=-1;
    return r;
}