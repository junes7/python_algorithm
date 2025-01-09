#include <stdio.h>

int main(void) {
    int n,x,elem,k;
    scanf("%d %d",&n,&x);
    int* t=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) {
        scanf("%d",&elem);
        t[i]=elem;
    }
    for(int i=0;i<n;i++) {
        if(t[i]<x)
            printf("%d ",t[i]);
    }
    return 0;
}