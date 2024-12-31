#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long combinations(int n, int r) {
    long sum=1;
    for(int i=1;i<r+1;i++)
        sum=(sum*n--)/i;
    return sum;
}

int solution(int balls, int share) {
    int r=combinations(balls,share);
    return r;
}