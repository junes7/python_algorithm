#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[0] == b[0]) return a[1] - b[1];
    return a[0] - b[0];
}
int main(void) {
    int n, price, cnt = 1, **arr;
    scanf("%d", &n);
    arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    qsort(arr, n, sizeof(int *), cmp);
    price = arr[0][1];
    for (int i = 1; i < n; i++) {
        if (price > arr[i][1]) {
            price = arr[i][1];
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}