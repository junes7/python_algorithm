#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// flag_len은 배열 flag의 길이입니다.
int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*(3000));
    int idx=0;
    for(int i=0;i<flag_len;i++) {
        if(flag[i]) {
            for(int j=0;j<arr[i]*2;j++)
                r[idx++]=arr[i];
        } else {
            idx-=arr[i];
        }
    }
    // r=(int*)realloc(r,sizeof(int)*idx);
    return r;
}