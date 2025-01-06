#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a-*(int*)b;
}

// score_len은 배열 score의 길이입니다.
int* solution(int k, int score[], size_t score_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*score_len);
    int* t=(int*)malloc(sizeof(int)*score_len);
    int idxt=0,idxr=0;
    for(int i=0;i<score_len;i++) {
        if(i<k)
            t[idxt++]=score[i];
        else {
            if(score[i]>t[0])
                t[0]=score[i];
        }
        qsort(t,idxt,sizeof(int),compare);
        r[idxr++]=t[0];
    }
    return r;
}