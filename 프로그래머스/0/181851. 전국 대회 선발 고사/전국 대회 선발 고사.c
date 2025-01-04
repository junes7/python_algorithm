#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



// rank_len은 배열 rank의 길이입니다.
// attendance_len은 배열 attendance의 길이입니다.
int solution(int rank[], size_t rank_len, bool attendance[], size_t attendance_len) {
    int r=0,cnt=0,d=10000;
    int idx[rank_len][3];
    memset(idx,0,sizeof(idx));
    for(int i=0;i<rank_len;i++) {
        if(attendance[i]) {
            idx[cnt][0]=rank[i];
            idx[cnt][1]=i;
            idx[cnt++][2]=0;
        }
    }
    for(int i=0;i<cnt;i++) {
        for(int j=0;j<cnt;j++)
        if(idx[i][0]>idx[j][0])
            idx[i][2]+=1;
        idx[i][2]+=1;
    }
    for(int i=1;i<4;i++) {
        for(int j=0;j<cnt;j++) {
            if(idx[j][2]==i) {
                r+=d*idx[j][1];
                d/=100;
                break;
            }
        }
    }
    return r;
}