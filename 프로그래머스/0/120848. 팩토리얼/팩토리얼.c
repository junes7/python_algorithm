#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=1,mul=1;
    while(mul<=n) {
        mul*=++r;
    }
    return r-1;
}