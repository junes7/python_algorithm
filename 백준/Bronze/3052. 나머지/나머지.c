#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int elem,re[10],idx=0;
    bool flag;
    for (int i = 0; i < 10; i++) {
        scanf("%d",&elem);
        elem %= 42;
        flag=true;
        for(int j=0;j<idx;j++) {
            if(re[j]==elem) {
                flag=false;
                break;
            }
        }
        if(flag)
            re[idx++]=elem;
        
    }
    printf("%d\n",idx);
    return 0;
}