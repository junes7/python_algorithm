#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int r=0,tem=0;
    for(int t=i;t<j+1;t++) {
        tem=t;
        while(tem>=10) {
            if(tem%10==k)
                r+=1;
            tem/=10;
        }
        if(tem==k)
            r+=1;
    }
    return r;
}