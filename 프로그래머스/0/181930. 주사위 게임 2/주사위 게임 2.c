#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a-*(int*)b;
}

int solution(int a, int b, int c) {
    int r=1,cnt=1;
    int m[]={a,b,c};
    qsort(m,sizeof(m)/sizeof(int),sizeof(int),compare);
    int n[3]={m[0]};
    for(int i=1;i<sizeof(m)/sizeof(int);i++)
        if(m[i]!=n[cnt-1])
            n[cnt++]=m[i];
    for(int i=1;i<=4-cnt;i++)
        r*=pow(a,i)+pow(b,i)+pow(c,i);
    return r;
}