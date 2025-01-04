#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    char ch[5];
    int s=0;
    sprintf(ch,"%d",x);
    for(int i=0;i<strlen(ch);i++) {
        s+=ch[i]-48;
    }
    bool r=x%s==0?true:false;
    return r;
}