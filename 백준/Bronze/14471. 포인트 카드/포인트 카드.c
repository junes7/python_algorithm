#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    return b[0] - a[0];
}
int main(void) {
    int n, m, rlt = 0, **arr;
    scanf("%d %d", &n, &m);
    arr = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    qsort(arr, m, sizeof(int *), cmp);
    for (int i = 0; i < m - 1; i++) {
        if (arr[i][0] >= n) continue;
        rlt += n - arr[i][0];
    }
    printf("%d", rlt);
    return 0;
}