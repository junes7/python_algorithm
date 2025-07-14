#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[0] == b[0]) return a[1] - b[1];
    return a[0] - b[0];
}
int main(void) {
    int total_t = 0, pen = 0, **arr;
    arr = (int **)malloc(sizeof(int *) * 11);
    for (int i = 0; i < 11; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    qsort(arr, 11, sizeof(int *), cmp);
    for (int i = 0; i < 11; i++) {
        total_t += arr[i][0];
        pen += total_t + 20 * arr[i][1];
    }
    printf("%d", pen);
    return 0;
}