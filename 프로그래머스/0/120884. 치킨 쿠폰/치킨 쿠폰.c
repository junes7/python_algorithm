#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int chicken) {
    int r=0;
    while(chicken>=10) {
        r+=chicken/10;
        chicken=chicken/10+chicken%10;
    }
    return r;
}