#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=0,a=1,b=1;
    for(int i=3;i<n+1;i++) {
        r=a;
        a=b;
        b=(r+b)%1234567;
    }
    return b;
}