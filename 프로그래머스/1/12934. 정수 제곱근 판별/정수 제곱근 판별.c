#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long r=0;
    double t=pow(n,0.5);
    r=t-(int)t==0?pow((int)t+1,2):-1;
    return r;
}