#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int t, n, p, q, total, cnt, *arr;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &n, &p, &q);
        arr = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        qsort(arr, n, sizeof(int), cmp);
        total = 0, cnt = n;
        for (int j = 0; j < n; j++) {
            if (total + arr[j] > q) {
                cnt = j;
                break;
            } else
                total += arr[j];
        }
        printf("Case %d: %d\n", i + 1, cnt < p ? cnt : p);
    }
    return 0;
}