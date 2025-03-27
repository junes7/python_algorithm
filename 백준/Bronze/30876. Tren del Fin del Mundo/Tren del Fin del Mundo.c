#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    return a[1] - b[1];
}
int main(void) {
    int n, **arr;
    scanf("%d", &n);
    arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    qsort(arr, n, sizeof(int *), compare);
    printf("%d %d", arr[0][0], arr[0][1]);
    return 0;
}