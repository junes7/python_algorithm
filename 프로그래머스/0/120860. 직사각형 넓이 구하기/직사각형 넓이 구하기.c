#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int r=0,h,w;
    for(int i=1;i<dots_rows;i++) {
        if(dots[0][0]==dots[i][0])
            h=dots[i][1]-dots[0][1];
        if(dots[0][1]==dots[i][1])
            w=dots[i][0]-dots[0][0];
    }
    r=h*w;
    return r>0?r:-r;
}