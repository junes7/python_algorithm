#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void *b) {
    return *(int*)a-*(int*)b;
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int r=0,min=100,idx=0;
    int* diff=(int*)malloc(sizeof(int)*array_len);
    qsort(array,array_len,sizeof(int),compare);
    for(int i=0;i<array_len;i++) {
        diff[i]=abs(array[i]-n);
    }
    for(int i=0;i<array_len;i++) {
        if(min>diff[i]) {
            min=diff[i];
            idx=i;
        }
    }
    r=array[idx];
    return r;
}