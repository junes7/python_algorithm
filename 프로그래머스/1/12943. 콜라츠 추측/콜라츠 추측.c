#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long num) {
    int r=0;
    for(int i=0;i<500;i++) {
        if(num==1) {
            break;
        } else {
            num=num%2==0?num/2:num*3+1;
            r+=1;
        }
    }
    if(r>=500) {
        r=-1;
    }
    return r;
}