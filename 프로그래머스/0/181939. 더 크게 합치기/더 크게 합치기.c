#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int r=0;
    char fa[5],fb[5],facp[5];
    sprintf(fa,"%d",a);
    sprintf(fb,"%d",b);
    strcpy(facp,fa);
    a=atoi(strcat(fa,fb));
    b=atoi(strcat(fb,facp));
    r=a>=b?a:b;
    return r;
}