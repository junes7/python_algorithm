#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// board_rows는 2차원 배열 board의 행 길이, board_cols는 2차원 배열 board의 열 길이입니다.
int solution(int** board, size_t board_rows, size_t board_cols) {
    int r=0,sx,ex,sy,ey;
    for(int i=0;i<board_rows;i++) {
        for(int j=0;j<board_cols;j++) {
            if(board[i][j]==1) {
                sx=i==0?0:i-1;
                ex=i==board_cols-1?i:i+1;
                sy=j==0?0:j-1;
                ey=j==board_cols-1?j:j+1;
                for(int k=sx;k<ex+1;k++)
                    for(int m=sy;m<ey+1;m++)
                        if(board[k][m]!=1)
                            board[k][m]=2;
            }
        }
    }
    for(int i=0;i<board_rows;i++)
        for(int j=0;j<board_cols;j++)
            if(board[i][j]==0)
                r+=1;
    return r;
}