#include <stdio.h>

int main(void) {
    int n,elem,maxn=0;
    scanf("%d",&n);
    double s=0, num[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&elem);
        num[i]=elem;
        if(maxn<elem)
            maxn=elem;
    }
    for(int i=0;i<n;i++) {
        num[i]/=maxn;
        s+=num[i];
    }
    printf("%f",s/n*100);
    return 0;
}