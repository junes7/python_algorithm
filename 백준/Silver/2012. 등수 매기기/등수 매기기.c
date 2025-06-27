#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int n, *arr;
    long long rlt = 0;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 1; i < n + 1; i++) {
        rlt += abs(i - arr[i - 1]);
    }
    printf("%lld", rlt);
    return 0;
}