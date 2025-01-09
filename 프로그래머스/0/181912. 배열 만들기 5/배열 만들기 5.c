#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// intStrs_len은 배열 intStrs의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*intStrs_len);
    int t=0,n=1,idx=0;
    for(int i=0;i<intStrs_len;i++) {
        t=0,n=1;
        for(int j=s+l-1;j>=s;j--) {
            t+=(intStrs[i][j]-'0')*n;
            n*=10;
        }
        if(t>k)
            r[idx++]=t;
    }
    r=(int*)realloc(r,sizeof(int)*idx);
    return r;
}