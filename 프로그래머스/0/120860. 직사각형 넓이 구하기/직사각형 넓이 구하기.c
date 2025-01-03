#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void** a, const void** b) {
    return *(int**)a-*(int**)b;
}

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int r=0;
    qsort(dots,dots_rows,sizeof(int*),compare);
    r=(dots[dots_rows-1][0]-dots[0][0])*(dots[dots_rows-1][1]-dots[0][1]);
    return r;
}