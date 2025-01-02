#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*n);
    int d=2,idx=0;
    bool flag;
    while(n>1) {
        flag=true;
        if(n%d==0) {
            n/=d;
            for(int i=0;i<n;i++) {
                if(r[i]==d) {
                    flag=false;
                    break;
                }
            }
            if(flag)
                r[idx++]=d;
        } else {
            d+=1;   
        }
    }
    return r;
}