#include <stdio.h>

int main(void) {
    int n,elem,minn,maxn;
    scanf("%d",&n);
    int t[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&elem);
        t[i]=elem;
    }
    minn=t[0],maxn=t[0];
    for(int i=0;i<n;i++) {
        if(minn>t[i])
            minn=t[i];
        if(maxn<t[i])
            maxn=t[i];
    }
    printf("%d %d\n",minn,maxn);
    return 0;
}