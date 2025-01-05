#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int r=0,cnt;
    for(int n=left;n<right+1;n++) {
        cnt=0;
        for(int i=1;i<n+1;i++)
            if(n%i==0)
                cnt+=1;
        r+=cnt%2==0?n:-n;
    }
    return r;
}