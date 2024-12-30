#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*100*100);
    int cnt=0;
    for(int i=0;i<arr_len;i++) {
        for(int j=0;j<arr[i];j++) {
            r[cnt++]=arr[i];
        }
    }
    return r;
}