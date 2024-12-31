#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int** r=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++) {
        r[i]=(int*)malloc(sizeof(int)*n);
        for(int j=0;j<n;j++) {
            r[i][j]=i==j?1:0;
        }
    }
    return r;
}