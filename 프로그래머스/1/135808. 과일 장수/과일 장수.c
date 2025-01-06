#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)b-*(int*)a;
}

// score_len은 배열 score의 길이입니다.
int solution(int k, int m, int score[], size_t score_len) {
    int r=0,nmin=9;
    qsort(score,score_len,sizeof(int),compare);
    for(int i=0;i<score_len/m;i++) {
        for(int j=m*i;j<m*(i+1);j++) {
            if(nmin>score[j])
                nmin=score[j];
        }
        r+=nmin*m;
    }
    return r;
}