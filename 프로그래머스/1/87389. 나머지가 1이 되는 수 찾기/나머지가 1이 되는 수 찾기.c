#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=0;
    for(int i=1;i<n+1;i++) {
        if(n%i==1) {
            r=i;
            break;
        }   
    }
    return r;
}