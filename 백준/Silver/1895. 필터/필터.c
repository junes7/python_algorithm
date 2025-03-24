#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int R, C, T, cnt, len, idx, idx2 = 0;
    scanf("%d %d", &R, &C);
    int **arr = (int **)malloc(sizeof(int *) * R);
    int *temp = (int *)malloc(sizeof(int) * (3 * 3));
    len = (R - 3 + 1) * (C - 3 + 1);
    int *filter = (int *)malloc(sizeof(int) * len);
    for (int i = 0; i < R; i++) {
        arr[i] = (int *)malloc(sizeof(int) * C);
        for (int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &T);
    for (int r = 0; r < R - 3 + 1; r++) {
        for (int c = 0; c < C - 3 + 1; c++) {
            memset(temp, 0, sizeof(int) * (3 * 3));
            idx = 0;
            for (int i = r; i < r + 3; i++) {
                for (int j = c; j < c + 3; j++) {
                    temp[idx++] = arr[i][j];
                }
            }
            qsort(temp, 3 * 3, sizeof(int), compare);
            filter[idx2++] = temp[4];
        }
    }
    cnt = 0;
    for (int k = 0; k < len; k++) {
        if (filter[k] > T || filter[k] == T)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}