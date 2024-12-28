#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int r=0,maxn=0,sum=0;
    for(int i=0;i<sides_len;i++) {
        sum+=sides[i];
        if(maxn<sides[i])
            maxn=sides[i];
    }
    r=(sum-maxn>maxn)?1:2;
    return r;
}