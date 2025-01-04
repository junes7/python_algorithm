#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long r=0;
    int t;
    if(a>b) {
        t=a;
        a=b;
        b=t;
    }
    for(int i=a;i<b+1;i++)
        r+=i;
    return r;
}