#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int l, int r) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* ans=(int*)malloc(sizeof(int)*(r-l+1));
    memset(ans,0,sizeof(int)*(r-l+1));
    char ch[7];
    bool flag;
    int idx=0,re=0;
    for(int i=l;i<r+1;i+=1) {
        sprintf(ch,"%d",i);
        flag=true;
        for(int i=0;i<strlen(ch);i++) {
            if(ch[i]-48==0 || ch[i]-48==5)
                continue;
            else {
                flag=false;
                break;
            }
        }
        if(flag)
            ans[idx++]=i;
    }
    if(idx==0) {
        ans[idx]=-1;
    }
    return ans;
}