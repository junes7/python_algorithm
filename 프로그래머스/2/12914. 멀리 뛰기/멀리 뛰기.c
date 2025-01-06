#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int n) {
    long long r=0,a=0,b=1;
    for(int i=0;i<n;i++) {
        r=a;
        a=b;
        b=(r+b)%1234567;
    }
    return b;
}