#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*2000);
    memset(r,0,sizeof(int)*2000);
    int n=1;
    while(n<arr_len)
        n<<=1;
    for(int i=0;i<arr_len;i++)
        r[i]=arr[i];
    for(int i=arr_len;i<n;i++)
        r[i]=0;
    r=(int*)realloc(r,sizeof(int)*n);
    return r;
}