#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    long long *f = (long long *)malloc(sizeof(long long) * 116);
    f[1] = 1, f[2] = 1, f[3] = 1;
    scanf("%d", &n);
    for (int i = 4; i < 117; i++)
        f[i] = f[i - 1] + f[i - 3];
    printf("%lld", f[n]);
    return 0;
}