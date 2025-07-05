#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[0] == b[0]) return a[1] > b[1];
    return a[0] > b[0];
}
int main(void) {
    int n, rlt = -1, **arr;
    scanf("%d", &n);
    arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    qsort(arr, n, sizeof(int *), cmp);
    for (int i = 0; i < n; i++) {
        if (rlt <= arr[i][0]) {
            rlt = arr[i][0] + arr[i][1];
        } else {
            rlt += arr[i][1];
        }
    }
    printf("%d", rlt);
    return 0;
}