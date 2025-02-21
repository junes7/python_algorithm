#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int solve(int *cost, int *customer, int **dp, int n, int c) {
    int case1, case2;
    if (n < 0) return 987654321;
    if (c <= 0) return 0;
    if (dp[n][c]) return dp[n][c];
    case1 = solve(cost, customer, dp, n - 1, c);
    case2 = solve(cost, customer, dp, n, c - customer[n]) + cost[n];
    dp[n][c] = case1 < case2 ? case1 : case2;
    return dp[n][c];
}
int main(void) {
    int c, n, *cost, *customer, **dp;
    scanf("%d %d", &c, &n);
    cost = (int *)malloc(sizeof(int) * n);
    customer = (int *)malloc(sizeof(int) * n);
    dp = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &cost[i], &customer[i]);
        dp[i] = (int *)malloc(sizeof(int) * (c + 1));
        memset(dp[i], 0, sizeof(int) * (c + 1));
    }
    printf("%d", solve(cost, customer, dp, n - 1, c));
    return 0;
}