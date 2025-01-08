#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int** r=(int**)malloc(sizeof(int*)*n);
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    int d=0,e=1,x=0,y=0;
    for(int i=0;i<n;i++) {
        r[i]=(int*)malloc(sizeof(int)*n);
        for(int j=0;j<n;j++)
            r[i][j]=0;
    }
    while(e<=n*n) {
        if(x+dx[d]<0 || x+dx[d]>=n ||y+dy[d]<0 || y+dy[d]>=n || r[y+dy[d]][x+dx[d]]!=0)
           d=(d+1)%4;
        r[y][x]=e++;
        x+=dx[d];
        y+=dy[d];
    }
    return r;
}