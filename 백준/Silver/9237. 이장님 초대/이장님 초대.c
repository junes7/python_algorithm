#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a < b;
}
int main(void) {
    int n, *arr, maxn = 0;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++) {
        arr[i] -= n - 1 - i;
        if (maxn < arr[i])
            maxn = arr[i];
    }
    printf("%d", n + maxn + 1);
    return 0;
}