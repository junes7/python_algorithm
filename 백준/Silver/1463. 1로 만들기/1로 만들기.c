#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int x, *dp;
    scanf("%d", &x);
    dp = (int*)malloc(sizeof(int) * (x + 1));
    memset(dp, 0, sizeof(int) * (x + 1));
    for (int i = 2; i < x + 1; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 3 == 0)
            dp[i] = dp[i] < dp[i / 3] + 1 ? dp[i] : dp[i / 3] + 1;
        if (i % 2 == 0)
            dp[i] = dp[i] < dp[i / 2] + 1 ? dp[i] : dp[i / 2] + 1;
    }
    printf("%d", dp[x]);
    return 0;
}