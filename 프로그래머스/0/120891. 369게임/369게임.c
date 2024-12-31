#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int r=0;
    while(order>1) {
        if(order%10>0 && order%10%3==0)
            r+=1;
        order/=10;
    }
    return r;
}