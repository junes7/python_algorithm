#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int n, k, minn, *arr;
    scanf("%d", &n);
    k = 2 * n;
    arr = (int *)malloc(sizeof(int) * k);
    for (int i = 0; i < k; i++)
        scanf("%d", &arr[i]);
    qsort(arr, k, sizeof(int), cmp);
    minn = arr[0] + arr[k - 1];
    for (int i = 1; i < n; i++) {
        if (minn > arr[i] + arr[k - (i + 1)])
            minn = arr[i] + arr[k - (i + 1)];
    }
    printf("%d", minn);
    return 0;
}