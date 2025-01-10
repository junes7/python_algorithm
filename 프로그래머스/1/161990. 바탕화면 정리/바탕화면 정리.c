#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// wallpaper_len은 배열 wallpaper의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* wallpaper[], size_t wallpaper_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*4);
    memset(r,0,sizeof(int)*4);
    int idx=0,lft[50*wallpaper_len],rgt[50*wallpaper_len];
    for(int i=0;i<wallpaper_len;i++) {
        for(int j=0;j<strlen(wallpaper[i]);j++) {
            if(wallpaper[i][j]=='#') {
                lft[idx]=i;
                rgt[idx++]=j;
                
            }
        }
    }
    r[0]=lft[0],r[2]=0,r[1]=rgt[0],r[3]=0;
    for(int i=0;i<idx;i++) {
        if(r[0]>lft[i])
            r[0]=lft[i];
        if(r[2]<lft[i])
            r[2]=lft[i];
        if(r[1]>rgt[i])
            r[1]=rgt[i];
        if(r[3]<rgt[i])
            r[3]=rgt[i];    
    }
    r[2]+=1;
    r[3]+=1;
    return r;
}