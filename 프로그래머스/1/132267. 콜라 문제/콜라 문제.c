#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int r=0;
    while(n/a>0) {
        r+=n/a*b;
        n=n/a*b+n%a;
    }
    return r;
}