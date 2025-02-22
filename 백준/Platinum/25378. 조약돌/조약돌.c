#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    long n, remain, *stone, *dp;
    scanf("%ld", &n);
    stone = (long *)malloc(sizeof(long) * (n + 1));
    dp = (long *)malloc(sizeof(long) * (n + 1));
    memset(dp, 0, sizeof(long) * (n + 1));
    for (int i = 1; i < n + 1; i++)
        scanf("%ld", &stone[i]);
    for (int i = 1; i < n + 1; i++) {
        remain = stone[i];
        dp[i] = dp[i] > dp[i - 1] ? dp[i] : dp[i - 1];
        for (int j = i + 1; j < n + 1; j++) {
            remain = stone[j] - remain;
            if (remain < 0)
                break;
            else if (remain == 0)
                dp[j] = dp[i - 1] + 1;
        }
    }
    printf("%ld", n - dp[n]);
    return 0;
}