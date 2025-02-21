#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, **dp;
    scanf("%d", &n);
    dp = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        dp[i] = (int*)malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++)
            scanf("%d", &dp[i][j]);
    }
    for (int i = 1; i < n; i++) {
        dp[i][0] += dp[i - 1][1] < dp[i - 1][2] ? dp[i - 1][1] : dp[i - 1][2];
        dp[i][1] += dp[i - 1][0] < dp[i - 1][2] ? dp[i - 1][0] : dp[i - 1][2];
        dp[i][2] += dp[i - 1][0] < dp[i - 1][1] ? dp[i - 1][0] : dp[i - 1][1];
    }
    printf("%d", dp[n - 1][0] < dp[n - 1][1] ? (dp[n - 1][0] < dp[n - 1][2] ? dp[n - 1][0] : dp[n - 1][2]) : (dp[n - 1][1] < dp[n - 1][2] ? dp[n - 1][1] : dp[n - 1][2]));
    return 0;
}