#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, mod = 9901, **dp;
    scanf("%d", &n);
    dp = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        dp[i] = (int*)malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++)
            dp[i][j] = 1;
    }
    for (int i = 1; i < n; i++) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % mod;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % mod;
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
    }
    printf("%d", (dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2]) % mod);
    return 0;
}