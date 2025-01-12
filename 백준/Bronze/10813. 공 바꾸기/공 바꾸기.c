#include <stdio.h>

int main(void) {
    int n,m,a,b,t;
    scanf("%d %d",&n,&m);
    int num[n];
    for(int i=0;i<n;i++) {
        num[i]=i+1;
    }
    for(int i=0;i<m;i++) {
        scanf("%d %d",&a,&b);
        t=num[a-1];
        num[a-1]=num[b-1];
        num[b-1]=t;
    }
    for(int i=0;i<n;i++)
        printf("%d ",num[i]);
    return 0;
}