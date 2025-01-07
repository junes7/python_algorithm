#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int limit, int power) {
    int r=0,cnt=0;
    for(int i=1;i<number+1;i++) {
        cnt=0;
        for(int j=1;j*j<=i;j++)
            if(i%j==0)
                cnt+=j*j==i?1:2;
        r+=cnt>limit?power:cnt;
    }
    return r;
}