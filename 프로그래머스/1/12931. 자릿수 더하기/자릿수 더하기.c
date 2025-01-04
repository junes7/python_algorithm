#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=0;
    char ch[9];
    sprintf(ch,"%d",n);
    for(int i=0;i<strlen(ch);i++)
        r+=ch[i]-48;
    return r;
}