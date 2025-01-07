#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lines_rows는 2차원 배열 lines의 행 길이, lines_cols는 2차원 배열 lines의 열 길이입니다.
int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    int r=0,num[200][2],idx=0;
    memset(num,0,sizeof(int)*200*2);
    bool flag;
    for(int i=0;i<lines_rows;i++) {
        for(int j=lines[i][0];j<lines[i][1];j++) {
            flag=true;
            for(int k=0;k<idx;k++) {
                if(num[k][0]==j) {
                    num[k][1]+=1;
                    flag=false;
                    break;
                }
            }
            if(flag) {
                num[idx][0]=j;
                num[idx++][1]+=1;
            }
        }
    }
    for(int i=0;i<idx;i++)
        if(num[i][1]>=2)
            r+=1;
    return r;
}