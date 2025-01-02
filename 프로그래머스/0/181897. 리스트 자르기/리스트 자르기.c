#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// slicer_len은 배열 slicer의 길이입니다.
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*num_list_len);
    int start=n==1?0:slicer[0],end=n==2?num_list_len:slicer[1]+1,diff=n==4?slicer[2]:1,idx=0;
    for(int i=start;i<end;i=i+diff)
        r[idx++]=num_list[i];
    return r;
}