#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a < b;
}
int main(void) {
    int n, rlt = -1, *arr;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0; i < n - 2; i++) {
        if (arr[i] < arr[i + 1] + arr[i + 2]) {
            rlt = arr[i] + arr[i + 1] + arr[i + 2];
            break;
        }
    }
    printf("%d", rlt);
    return 0;
}