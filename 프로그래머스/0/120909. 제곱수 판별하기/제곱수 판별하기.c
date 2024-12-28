#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=(sqrt(n)==(int)sqrt(n))?1:2;
    return r;
}