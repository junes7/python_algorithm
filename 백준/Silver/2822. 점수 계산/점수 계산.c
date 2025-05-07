#include <stdio.h>
#include <stdlib.h>
int cmp1(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    return a[0] < b[0];
}
int cmp2(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int total = 0, elem, **arr, *idx;
    arr = (int **)malloc(sizeof(int *) * 8);
    idx = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < 8; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d", &arr[i][0]);
        arr[i][1] = i + 1;
    }
    qsort(arr, 8, sizeof(int *), cmp1);
    for (int i = 0; i < 5; i++) {
        total += arr[i][0];
        idx[i] = arr[i][1];
    }
    qsort(idx, 5, sizeof(int), cmp2);
    printf("%d\n", total);
    for (int i = 0; i < 5; i++)
        printf("%d ", idx[i]);
    return 0;
}