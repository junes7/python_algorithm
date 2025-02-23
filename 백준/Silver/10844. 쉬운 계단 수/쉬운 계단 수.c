#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, cnt = 0, mod = 1000000000, **dp;
    scanf("%d", &n);
    dp = (int**)malloc(sizeof(int*) * (n + 1));
    for (int i = 0; i < n + 1; i++) {
        dp[i] = (int*)malloc(sizeof(int) * 10);
        memset(dp[i], 0, sizeof(int) * 10);
    }
    for (int j = 1; j < 10; j++)
        dp[1][j] = 1;
    for (int i = 2; i < n + 1; i++) {
        for (int j = 0; j < 10; j++) {
            if (0 < j)
                dp[i][j] += dp[i - 1][j - 1];
            if (j < 9)
                dp[i][j] += dp[i - 1][j + 1];
            dp[i][j] %= mod;
        }
    }
    for (int j = 0; j < 10; j++) {
        cnt += dp[n][j];
        cnt %= mod;
    }
    printf("%d", cnt);
    return 0;
}