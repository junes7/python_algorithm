#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int r=-1;
    char nums[7];
    sprintf(nums,"%d",num);
    for(int i=0;i<strlen(nums);i++) {
        if(nums[i]-48==k) {
            r=i+1;
            break;
        }
    }
    return r;
}