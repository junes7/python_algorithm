#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int r=0,oddi=0,eveni=0;
    char* odd=(char*)malloc(sizeof(char)*5);
    char* even=(char*)malloc(sizeof(char)*5);
    for(int i=0;i<num_list_len;i++)
        if(num_list[i]%2==0)
            even[eveni++]=num_list[i]+48;
        else
            odd[oddi++]=num_list[i]+48;
    r=atoi(even)+atoi(odd);
    return r;
}