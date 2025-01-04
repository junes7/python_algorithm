#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* A, const char* B) {
    int r=0,idx;
    char *st=(char*)malloc(sizeof(char)*strlen(A)),*a=A;
    // memset(st,0,sizeof(char)*strlen(A));
    for(int i=0;i<strlen(a);i++) {
        if(strcmp(a,B)==0)
            break;
        idx=0;
        st[idx++]=a[strlen(A)-1];
        for(int j=0;j<strlen(a)-1;j++) {
            st[idx++]=a[j];
        }
        st[idx]='\0';
        r+=1;
        for(int j=0;j<strlen(A);j++)
            a[j]=st[j];
    }
    if(strcmp(a,B)!=0)
        r=-1;
    return r;
}