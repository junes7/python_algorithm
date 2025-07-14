#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const double a = *(double *)pa;
    const double b = *(double *)pb;
    return a < b;
}
int main(void) {
    int n, m, k, idx;
    double val, total = 0.0, *sing;
    scanf("%d %d %d", &n, &m, &k);
    sing = (double *)malloc(sizeof(double) * n);
    memset(sing, 0, sizeof(double) * n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d %lf", &idx, &val);
            if (sing[idx - 1] < val)
                sing[idx - 1] = val;
        }
    }
    qsort(sing, n, sizeof(double), cmp);
    for (int i = 0; i < k; i++)
        total += sing[i];
    printf("%.1lf", total);
    return 0;
}