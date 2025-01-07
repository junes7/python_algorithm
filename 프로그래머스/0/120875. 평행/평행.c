#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int r=0,idx=0,cnt[dots_rows],idx2=0;
    double diag[dots_rows];
    for(int i=0;i<dots_rows-1;i++)
        for(int j=i+1;j<dots_rows;j++)
            diag[idx++]=(double)(dots[j][0]-dots[i][0])/(dots[j][1]-dots[i][1]);
    for(int i=0;i<idx/2;i++)
        cnt[idx2++]=diag[i]==diag[idx-1-i]?1:0;
    for(int i=0;i<idx2;i++)
        if(r<cnt[i])
            r=cnt[i];
    return r;
}