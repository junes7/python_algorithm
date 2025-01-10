#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* X, const char* Y) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*strlen(X));
    memset(r,0,sizeof(char)*strlen(X));
    int xnum[10],ynum[10],minn,idx=0;
    memset(xnum,0,sizeof(int)*10);
    memset(ynum,0,sizeof(int)*10);
    for(int i=0;i<strlen(X);i++)
        xnum[X[i]-48]+=1;
    for(int i=0;i<strlen(Y);i++)
        ynum[Y[i]-48]+=1;
    for(int i=9;i>=0;i--) {
        minn=xnum[i]<ynum[i]?xnum[i]:ynum[i];
        for(int j=0;j<minn;j++)
            r[idx++]=i+48;
    }
    if(idx==0)
        strcpy(r,"-1");
    if(r[0]=='0' && idx>1)
        strcpy(r,"0");
    return r;
}