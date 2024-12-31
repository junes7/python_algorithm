#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr1_len은 배열 arr1의 길이입니다.
// arr2_len은 배열 arr2의 길이입니다.
int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    int r=0,s1=0,s2=0;
    if(arr1_len!=arr2_len)
        r=arr1_len>arr2_len?1:-1;
    else {
        for(int i=0;i<arr1_len;i++) {
            s1+=arr1[i];
            s2+=arr2[i];
        }
        r=s1==s2?0:s1>s2?1:-1;
    }
    return r;
}