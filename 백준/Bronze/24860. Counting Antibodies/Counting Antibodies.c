#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long *k = (long long *)malloc(sizeof(long long) * 2);
    long long *e = (long long *)malloc(sizeof(long long) * 2);
    long long *h = (long long *)malloc(sizeof(long long) * 3);
    for (int i = 0; i < 2; i++)
        scanf("%lld", &k[i]);
    for (int i = 0; i < 2; i++)
        scanf("%lld", &e[i]);
    for (int i = 0; i < 3; i++)
        scanf("%lld", &h[i]);
    printf("%lld", (k[0] * k[1] + e[0] * e[1]) * h[0] * h[1] * h[2]);
    return 0;
}