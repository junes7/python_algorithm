#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// date1_len은 배열 date1의 길이입니다.
// date2_len은 배열 date2의 길이입니다.
int solution(int date1[], size_t date1_len, int date2[], size_t date2_len) {
    for(int i=0;i<date1_len;i++) {
        if(date1[i]==date2[i])
            continue;
        else
            return date1[i]<date2[i];
    }
    return false;
}