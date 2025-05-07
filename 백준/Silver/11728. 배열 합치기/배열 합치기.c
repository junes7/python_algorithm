#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, m, idx = 0, *a, *b, *t;
    scanf("%d %d", &n, &m);
    a = (int *)malloc(sizeof(int) * n);
    b = (int *)malloc(sizeof(int) * m);
    t = (int *)malloc(sizeof(int) * (n + m));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        t[idx++] = a[i];
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
        t[idx++] = b[i];
    }
    qsort(t, n + m, sizeof(int), compare);
    for (int i = 0; i < n + m; i++)
        printf("%d ", t[i]);
    return 0;
}