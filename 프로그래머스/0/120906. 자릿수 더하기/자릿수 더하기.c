#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=0;
    while(n>0) {
        r+=n%10;
        n/=10;
    }
    return r;
}