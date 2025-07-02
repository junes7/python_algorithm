#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a < b;
}
int main(void) {
    int t, j, n, k, a, b, *arr;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &j, &n);
        arr = (int *)malloc(sizeof(int) * n);
        for (int k = 0; k < n; k++) {
            scanf("%d %d", &a, &b);
            arr[k] = a * b;
        }
        qsort(arr, n, sizeof(int), cmp);
        for (int k = 0; k < n; k++) {
            if (j - arr[k] <= 0) {
                printf("%d\n", k + 1);
                break;
            }
            j -= arr[k];
        }
    }
    return 0;
}