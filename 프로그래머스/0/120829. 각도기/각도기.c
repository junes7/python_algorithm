#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int r=angle/90*2+((angle%90==0)?0:1);
    return r;
}