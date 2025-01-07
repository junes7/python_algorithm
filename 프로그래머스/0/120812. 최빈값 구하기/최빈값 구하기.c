#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int r=0,num[array_len][2],maxn=0,maxv=0,idx=0;
    bool flag;
    memset(num,0,sizeof(int)*array_len*2);
    for(int i=0;i<array_len;i++) {
        flag=true;
        for(int j=0;j<idx;j++) {
            if(num[j][0]==array[i]) {
                flag=false;
                num[j][1]+=1;
                break;
            }
        }
        if(flag) {
            num[idx][0]=array[i];
            num[idx++][1]+=1;
        }
    }
    for(int i=0;i<idx;i++) {
        if(maxv<num[i][1]) {
            maxn=num[i][0];
            maxv=num[i][1];
        }
    }
    for(int i=0;i<idx;i++) {
        if(maxv==num[i][1])
            r+=1;
    } 
    return r>1?-1:maxn;
}