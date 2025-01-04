#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int x, int y) {
    return x%y==0?y:gcd(y,x%y);
}

int solution(int a, int b) {
    int r=1,d,k=2,idx=0;
    bool flag;
    d=b/gcd(a,b);
    int p[100],t[2]={2,5};
    while(d>1) {
        flag=true;
        if(d%k==0) {
            for(int i=0;i<idx;i++) {
                if(p[i]==k) {
                    flag=false;
                    break;
                }
            }
            if(flag)
                p[idx++]=k;
            d/=k;
        } else {
            k+=1;
        }     
    }
    for(int i=0;i<idx;i++) {
        if(p[i]%10!=2 && p[i]%10!=5) {
            r=2;
            break;
        }
    }
    return r;
}