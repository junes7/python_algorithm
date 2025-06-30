#include <stdio.h>
#include <stdlib.h>
int cmp1(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int cmp2(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a < b;
}
int main(void) {
    int t, n, total, *v1, *v2;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        v1 = (int *)malloc(sizeof(int) * n);
        v2 = (int *)malloc(sizeof(int) * n);
        total = 0;
        for (int j = 0; j < n; j++)
            scanf("%d", &v1[j]);
        for (int j = 0; j < n; j++)
            scanf("%d", &v2[j]);
        qsort(v1, n, sizeof(int), cmp1);
        qsort(v2, n, sizeof(int), cmp2);
        for (int j = 0; j < n; j++)
            total += v1[j] * v2[j];
        printf("Case #%d: %d\n", i + 1, total);
    }
    return 0;
}