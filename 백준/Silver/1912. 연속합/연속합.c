#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, *arr, *dp, maxn;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    dp = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    dp[0] = arr[0], maxn = arr[0];
    for (int i = 1; i < n; i++) {
        dp[i] = arr[i] > arr[i] + dp[i - 1] ? arr[i] : arr[i] + dp[i - 1];
        if (maxn < dp[i]) maxn = dp[i];
    }
    printf("%d", maxn);
    return 0;
}