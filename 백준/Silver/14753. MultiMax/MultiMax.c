#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int n, mul3, mul2, *arr;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    mul3 = arr[0] * arr[1] * arr[n - 1] > arr[n - 3] * arr[n - 2] * arr[n - 1] ? arr[0] * arr[1] * arr[n - 1] : arr[n - 3] * arr[n - 2] * arr[n - 1];
    mul2 = arr[0] * arr[1] > arr[n - 2] * arr[n - 1] ? arr[0] * arr[1] : arr[n - 2] * arr[n - 1];
    printf("%d", mul3 > mul2 ? mul3 : mul2);
    return 0;
}