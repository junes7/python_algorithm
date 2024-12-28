#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int r=(hp/5)+(hp%5)/3+(hp%5)%3;
    return r;
}