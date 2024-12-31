#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int r=n/slice+(n%slice>0);
    return r;
}