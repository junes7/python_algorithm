#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int r=1;
    for(int i=0;i<num_list_len;i++) {
        if(num_list_len>=11)
            r+=num_list[i];
        else
            r*=num_list[i];
    }
    return (num_list_len>=11)?r-1:r;
}