#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int t, idx = 0, n, *f, *rlt;
    f = (int *)malloc(sizeof(int) * 46);
    rlt = (int *)malloc(sizeof(int) * 20);
    scanf("%d", &t);
    f[0] = 0, f[1] = 1;
    for (int i = 2; i < 46; i++)
        f[i] = f[i - 1] + f[i - 2];
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        idx = 0;
        for (int i = 45; i >= 0; i--) {
            if (f[i] <= n) {
                rlt[idx++] = f[i];
                n -= f[i];
            }
            if (n == 0) {
                qsort(rlt, idx, sizeof(int), cmp);
                for (int i = 0; i < idx; i++)
                    printf("%d ", rlt[i]);
                printf("\n");
                break;
            }
        }
    }
    return 0;
}