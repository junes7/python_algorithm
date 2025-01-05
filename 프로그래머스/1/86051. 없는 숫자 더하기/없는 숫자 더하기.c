#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int r=0;
    bool flag;
    for(int i=0;i<10;i++) {
        flag=false;
        for(int j=0;j<numbers_len;j++) {
            if(i==numbers[j]) {
                flag=true;
                break;
            }
        }
        if(!flag)
            r+=i;
    }
    return r;
}