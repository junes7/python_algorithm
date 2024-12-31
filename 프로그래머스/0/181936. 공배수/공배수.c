#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    int r=number%n==0 && number%m==0?1:0;
    return r;
}