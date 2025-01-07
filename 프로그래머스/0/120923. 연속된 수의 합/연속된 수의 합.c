#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*num),med=total/num,idx,s;
    while(true) {
        idx=0,s=0;
        for(int i=0;i<num;i++) {
            r[idx++]=med+i;
            s+=med+i;
        }   
        if(idx==num && s==total)
            break;
        med--;
    }
    return r;
}