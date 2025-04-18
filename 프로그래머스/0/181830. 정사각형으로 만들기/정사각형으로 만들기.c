#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_rows는 2차원 배열 arr의 행 길이, arr_cols는 2차원 배열 arr의 열 길이입니다.
int** solution(int** arr, size_t arr_rows, size_t arr_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=arr_rows>arr_cols?arr_rows:arr_cols, diff=arr_rows-arr_cols;
    int** r=(int**)malloc(sizeof(int*)*len);
    for(int i=0;i<len;i++) {
        r[i]=(int*)malloc(sizeof(int)*len);
        memset(r[i],0,sizeof(int)*len);
        for(int j=0;j<len;j++) {
            if(diff>0)
                r[i][j]=j<arr_cols?arr[i][j]:0;
            else
                r[i][j]=i<arr_rows?arr[i][j]:0;
        }
    }
    return r;
}