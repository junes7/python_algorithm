#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, diff, *arr;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        arr = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        qsort(arr, n, sizeof(int), cmp);
        diff = arr[n - 1];
        for (int i = 1; i < n; i++) {
            if (diff > arr[i] - arr[i - 1])
                diff = arr[i] - arr[i - 1];
        }
        printf("%d\n", diff);
    }
    return 0;
}