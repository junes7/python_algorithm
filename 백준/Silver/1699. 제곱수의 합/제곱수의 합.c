#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, *dp;
    scanf("%d", &n);
    dp = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n + 1; i++)
        dp[i] = i;
    for (int i = 2; i < n + 1; i++) {
        for (int j = 1; j < i; j++) {
            if (j * j > i) break;
            if (dp[i] > dp[i - j * j] + 1)
                dp[i] = dp[i - j * j] + 1;
        }
    }
    printf("%d", dp[n]);
    return 0;
}