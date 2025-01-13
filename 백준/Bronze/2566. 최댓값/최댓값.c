#include <stdio.h>

int main(void) {
    int elem,maxn=-1,idx[2];
    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            scanf("%d",&elem);
            if(maxn<elem) {
                maxn=elem;
                idx[0]=i+1;
                idx[1]=j+1;
            }
        }
    }
    printf("%d\n%d %d",maxn,idx[0],idx[1]);
    return 0;
}