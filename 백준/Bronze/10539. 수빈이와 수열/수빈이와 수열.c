#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum_arr(int* rlt, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += rlt[i];
    return s;
}
int main(void) {
    int n, *arr, *rlt;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    rlt = (int*)malloc(sizeof(int) * n);
    memset(rlt, 0, sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        if (i == 0)
            rlt[i] = arr[0];
        else
            rlt[i] = arr[i] * (i + 1) - sum_arr(rlt, n);
        printf("%d ", rlt[i]);
    }
    return 0;
}