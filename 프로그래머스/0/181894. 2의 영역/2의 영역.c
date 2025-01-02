#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*arr_len);
    memset(r,0,sizeof(int)*arr_len);
    int idx[2]={-1,-1};
    for(int i=0;i<arr_len+1;i++) {
        if(arr[i]==2 && idx[0]==-1) {
            idx[0]=i;
        }
        if(arr[arr_len-1-i]==2 && idx[1]==-1) {
            idx[1]=arr_len-1-i;
        }
    }
    if(idx[0]==-1 && idx[1]==-1)
        r[0]=-1;
    else {
        for(int i=idx[0];i<idx[1]+1;i++)
            r[i-idx[0]]=arr[i];
    }
    return r;
}