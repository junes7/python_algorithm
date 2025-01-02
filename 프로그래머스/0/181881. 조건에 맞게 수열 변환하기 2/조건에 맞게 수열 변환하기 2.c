#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int r=0, cnt=0;
    int t[arr_len];
    bool flag=false;
    for(int i=0;i<arr_len;i++) {
        t[i]=arr[i];
    }
    while(!flag) {
        cnt=0;
        for(int i=0;i<sizeof(t)/sizeof(int);i++) {
            if(arr[i]>=50 && arr[i]%2==0)
                t[i]=arr[i]/2;
            else if(arr[i]<50 && arr[i]%2==1)
                t[i]=arr[i]*2+1;
        }
        for(int i=0;i<arr_len;i++)
            if(t[i]==arr[i])
                cnt+=1;
        if(cnt==arr_len) {
            flag=true;
            break;
        }
        r+=1;
        for(int i=0;i<arr_len;i++)
            arr[i]=t[i];
    }
    return r;
}