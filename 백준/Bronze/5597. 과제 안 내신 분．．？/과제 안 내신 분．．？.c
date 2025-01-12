#include <stdio.h>

int main(void) {
    int elem,idx=0,num[31]={0,},absn[2];
    for(int i=0;i<28;i++) {
        scanf("%d",&elem);
        num[elem]=1;
    }
    for(int i=1;i<31;i++) {
        if(num[i]==0)
            absn[idx++]=i;
    }
    for(int i=0;i<2;i++)
        printf("%d\n",absn[i]);
    return 0;
}