#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int r=0,min=sides[0];
    min=min>sides[1]?sides[1]:min;
    r=2*min-1;
    return r;
}