#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ingredient_len은 배열 ingredient의 길이입니다.
int solution(int ingredient[], size_t ingredient_len) {
    int r=0,t[ingredient_len],idx=0;
    for(int i=0;i<ingredient_len;i++) {
        if(t[idx-1]==1 && ingredient[i]==2) t[idx-1]=12;
        else if(t[idx-1]==12 && ingredient[i]==3) t[idx-1]=123;
        else if(t[idx-1]==123 && ingredient[i]==1) r+=1,idx--;
        else t[idx++]=ingredient[i];
    }
    return r;
}