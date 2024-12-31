#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int r[]={0,0};
    for(int i=0;i<num_list_len;i++)
        r[i%2]+=num_list[i];
    return r[0]>=r[1]?r[0]:r[1];
}