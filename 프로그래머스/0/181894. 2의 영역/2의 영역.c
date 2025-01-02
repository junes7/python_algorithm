#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*arr_len);
    memset(r,0,sizeof(int)*arr_len);
    int start=0,end=0;
    for(int i=0;i<=arr_len;i++) {
        if(arr[i]==2) {   
            start=i;
            break;
        }   
    }
    for(int i=arr_len-1;i>=0;i--) {
        if(arr[i]==2) {   
            end=i;
            break;
        }   
    }
    // printf("%d %d",start,end);
    if(start==0 && end==0)
        r[0]=-1;
    else {
        for(int i=start;i<end+1;i++) {
            r[i-start]=arr[i];
        }
    }
    return r;
}