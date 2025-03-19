#include <stdio.h>
#include <stdlib.h>
int max_sum_of_stairs(int *stairs, int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return stairs[0];
    else if (n == 2)
        return stairs[0] + stairs[1];
    int *dp = (int *)malloc(sizeof(int) * n);
    dp[0] = stairs[0];
    dp[1] = stairs[0] + stairs[1];
    dp[2] = stairs[0] + stairs[2] > stairs[1] + stairs[2] ? stairs[0] + stairs[2] : stairs[1] + stairs[2];
    for (int i = 3; i < n; i++)
        dp[i] = (dp[i - 2] > dp[i - 3] + stairs[i - 1] ? dp[i - 2] : dp[i - 3] + stairs[i - 1]) + stairs[i];
    return dp[n - 1];
}
int main(void) {
    int n, *stairs;
    scanf("%d", &n);
    stairs = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &stairs[i]);
    printf("%d", max_sum_of_stairs(stairs, n));
    return 0;
}