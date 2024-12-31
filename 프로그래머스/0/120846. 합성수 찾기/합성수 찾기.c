#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int r=0,cnt=0;
    for(int i=4;i<n+1;i++) {
        cnt=0;
        for(int j=1;j<i+1;j++)
            if(i%j==0)
                cnt+=1;
        if(cnt>=3)
            r+=1;
    }
    return r;
}