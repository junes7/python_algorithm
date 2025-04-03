#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, x, idx = 0, *arr, *rlt, minn;
    scanf("%d %d", &n, &x);
    arr = (int*)malloc(sizeof(int) * n);
    rlt = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    minn = 2 * pow(10, 9);
    for (int i = 0; i < n - 1; i++) {
        rlt[idx++] = (arr[i] + arr[i + 1]) * x;
        if (minn > rlt[idx - 1])
            minn = rlt[idx - 1];
    }
    printf("%d", minn);
    return 0;
}