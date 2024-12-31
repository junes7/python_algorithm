#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int r=0;
    char fa[5],fb[5];
    sprintf(fa,"%d",a);
    sprintf(fb,"%d",b);
    r=atoi(strcat(fa,fb));
    r=r>=2*a*b?r:2*a*b;
    return r;
}