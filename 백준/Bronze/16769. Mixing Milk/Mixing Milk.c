#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int idx, nidx, t, **arr;
    arr = (int**)malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        arr[i] = (int*)malloc(sizeof(int) * 2);
        for (int j = 0; j < 2; j++)
            scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < 100; i++) {
        idx = i % 3, nidx = (i + 1) % 3;
        t = arr[idx][1];
        arr[idx][1] = arr[idx][1] - (arr[nidx][0] - arr[nidx][1]) > 0 ? arr[idx][1] - (arr[nidx][0] - arr[nidx][1]) : 0;
        arr[nidx][1] = arr[nidx][0] < t + arr[nidx][1] ? arr[nidx][0] : t + arr[nidx][1];
    }
    for (int i = 0; i < 3; i++)
        printf("%d\n", arr[i][1]);
    return 0;
}