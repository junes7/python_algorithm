#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a < b;
}
int main(void) {
    int n, rlt = 0, total = 0, *arr;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 2; i < n; i = i + 3)
        rlt += arr[i];
    printf("%d", total - rlt);
    return 0;
}