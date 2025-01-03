#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* stk=(int*)malloc(sizeof(int)*arr_len);
    memset(stk,0,sizeof(int)*arr_len);
    int i=0,idx=0;
    while(i<arr_len) {
        if(stk==NULL) {
            stk[idx++]=arr[i++];
        } else {
            if(stk[idx-1]<arr[i])
                stk[idx++]=arr[i++];
            else
                idx--;
        }
    }
    return stk;
}