#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int r=0,t=0;
    for(int i=0;i<array_len-1;i++) {
        for(int j=0;j<array_len-1-i;j++) {
            if(array[j]>array[j+1]) {
                t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }
        }
    }
    r=array[array_len/2];
    return r;
}