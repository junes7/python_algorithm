#include <stdio.h>

int main(void) {
    int n,elem,k;
    scanf("%d",&n);
    int* t=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) {
        scanf("%d",&elem);
        t[i]=elem;
    }
    scanf("%d",&k);
    elem=0;
    for(int i=0;i<n;i++) {
        if(t[i]==k)
           elem+=1; 
    }
    printf("%d\n",elem);
    return 0;
}