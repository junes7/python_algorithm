#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=0;
    for(int i=n%2;i<n+1;i+=2)
        r+=n%2==0?pow(i,2):i;
    return r;
}