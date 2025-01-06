#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int r=0,sum,d,t[100],idx;
    for(int i=0;i<nums_len-2;i++) {
        for(int j=i+1;j<nums_len-1;j++) {
            for(int k=j+1;k<nums_len;k++) {
                d=2,idx=0;
                sum=nums[i]+nums[j]+nums[k];
                while(sum>1) {
                    if(sum%d==0) {
                        t[idx++]=sum%d;
                        sum/=d;
                    } else {
                        d+=1;
                    }
                }
                r+=idx==1?1:0;
            }
        }
    }
    return r;
}