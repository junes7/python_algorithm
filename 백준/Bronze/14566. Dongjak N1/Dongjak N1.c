#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, *arr, *diff, cnt = 0;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    diff = (int *)malloc(sizeof(int) * (n - 1));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 1; i < n; i++)
        diff[i - 1] = arr[i] - arr[i - 1];
    qsort(diff, n - 1, sizeof(int), cmp);
    for (int i = 0; i < n - 1; i++)
        if (diff[i] == diff[0])
            cnt += 1;
    printf("%d %d", diff[0], cnt);
    return 0;
}