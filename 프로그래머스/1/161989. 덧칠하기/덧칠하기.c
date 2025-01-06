#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// section_len은 배열 section의 길이입니다.
int solution(int n, int m, int section[], size_t section_len) {
    int r=1,st=section[0];
    for(int i=0;i<section_len;i++) {
        if(st+m-1<section[i]) {
            st=section[i];
            r+=1;
        }
    }
    return r;
}