#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    return a[1] - b[1];
}
int main(void) {
    int n, l, k, cnt = 0, scr = 0, **arr;
    scanf("%d %d %d", &n, &l, &k);
    arr = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    qsort(arr, n, sizeof(int *), cmp);
    for (int i = 0; i < n; i++) {
        if (cnt == k) break;
        if (arr[i][1] <= l) {
            scr += 140;
            cnt += 1;
        } else if (arr[i][0] <= l) {
            scr += 100;
            cnt += 1;
        }
    }
    printf("%d", scr);
    return 0;
}