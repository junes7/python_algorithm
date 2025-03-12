#include <stdio.h>
int main(void) {
    int n;
    scanf("%d",&n);
    printf("%d",n/10==n%10?1:0);
    return 0;
}