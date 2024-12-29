#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*arr_len);
    for(int i=0;i<arr_len;i++) {
        if(arr[i]>=50 && arr[i]%2==0)
            r[i]=arr[i]/2;
        else if(arr[i]<50 && arr[i]%2!=0)
            r[i]=arr[i]*2;
        else
            r[i]=arr[i];
    }
    return r;
}