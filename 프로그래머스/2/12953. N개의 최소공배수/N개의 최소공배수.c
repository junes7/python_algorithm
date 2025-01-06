#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(const int x, const int y) {
    return x%y==0?y:gcd(y,x%y);
}

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int r=arr[0];
    for(int i=0;i<arr_len-1;i++) {
        r=r*arr[i+1]/gcd(r,arr[i+1]);
    }
    return r;
}