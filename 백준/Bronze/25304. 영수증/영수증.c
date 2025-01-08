#include <stdio.h>

int main(void) {
    int total,n,a,b,s=0;
    scanf("%d",&total);
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d %d",&a,&b);
        s+=a*b;
    }
    printf(s==total?"Yes\n":"No\n");
    return 0;
}