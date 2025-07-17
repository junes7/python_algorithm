#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const long long a = *(long long *)pa;
    const long long b = *(long long *)pb;
    return a - b;
}
int main(void) {
    long long total = 0, *price, *jars;
    price = (long long *)malloc(sizeof(long long) * 3);
    jars = (long long *)malloc(sizeof(long long) * 3);
    for (int i = 0; i < 3; i++)
        scanf("%lld", &price[i]);
    for (int i = 0; i < 3; i++)
        scanf("%lld", &jars[i]);
    qsort(price, 3, sizeof(long long), cmp);
    qsort(jars, 3, sizeof(long long), cmp);
    for (int i = 0; i < 3; i++)
        total += price[i] * jars[i];
    printf("%lld", total);
    return 0;
}