#include <stdio.h>

int main(void) {
    int elem,maxn=0,idx;
    for(int i=0;i<9;i++) {
        scanf("%d",&elem);   
        if(maxn<elem) {
            maxn=elem;
            idx=i+1;
        }
    }
    printf("%d\n%d\n",maxn,idx);
    return 0;
}