#include <stdio.h>
int main(void) {
    int n, m;
    scanf("%d",&n);
    m = 200 - n - 1;
    printf("%d",m < 0 ? 0 : m);
    return 0;
}