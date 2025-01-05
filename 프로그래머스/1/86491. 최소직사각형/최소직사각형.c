#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int r=0,maxw=0,maxh=0;
    for(int i=0;i<sizes_rows;i++) {
        if(sizes[i][0]<sizes[i][1]) {
            r=sizes[i][0];
            sizes[i][0]=sizes[i][1];
            sizes[i][1]=r;
        }
        if(maxw<sizes[i][0])
            maxw=sizes[i][0];
        if(maxh<sizes[i][1])
            maxh=sizes[i][1];
    }
    r=maxw*maxh;
    return r;
}