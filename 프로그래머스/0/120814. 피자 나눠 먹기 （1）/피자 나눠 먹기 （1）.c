#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    // int r=n/7+(n%7==0?0:1);
    int r=n/7+(n%7>0);
    return r;
}