#include <stdio.h>

int main(void) {
    int x,y,n;
    scanf("%d",&x);
    scanf("%d",&y);
    n=y;
    while(n>0) {
        printf("%d\n",x*(n%10));
        n/=10;
    }
    printf("%d\n",x*y);
    return 0;
}