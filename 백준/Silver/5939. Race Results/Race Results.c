#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[0] == b[0] && a[1] == b[1]) return a[2] > b[2];
    if (a[0] == b[0]) return a[1] > b[1];
    return a[0] > b[0];
}
int main(void) {
    int n, **arr;
    scanf("%d", &n);
    arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    }
    qsort(arr, n, sizeof(int *), cmp);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}