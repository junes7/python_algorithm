#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, m, idx = 0, final = 0, **arr, *maxn, *rlt, *idxn;
    scanf("%d %d", &n, &m);
    arr = (int **)malloc(sizeof(int *) * n);
    maxn = (int *)malloc(sizeof(int) * m);
    memset(maxn, 0, sizeof(int) * m);
    rlt = (int *)malloc(sizeof(int) * n);
    memset(rlt, 0, sizeof(int) * n);
    idxn = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
        qsort(arr[i], m, sizeof(int), cmp);
        for (int j = 0; j < m; j++) {
            if (maxn[j] < arr[i][j])
                maxn[j] = arr[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (arr[i][j] == maxn[j])
                rlt[i] += 1;
            if (j == m - 1 && final < rlt[i])
                final = rlt[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (final == rlt[i])
            idxn[idx++] = i + 1;
    }
    qsort(idxn, idx, sizeof(int), cmp);
    for (int i = 0; i < idx; i++)
        printf("%d ", idxn[i]);
    return 0;
}