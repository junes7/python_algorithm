#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=0;
    for(int i=1;i<n+1;i++) {
        r+=1;
        while(r%3==0 || (r/10)%10==3 || r%10==3)
            r+=1;
    }
    return r;
}