#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int k;
    scanf("%d", &k);
    int *dp = (int *)malloc(sizeof(int) * (k + 1));
    memset(dp, 0, sizeof(int) * (k + 1));
    dp[1] = 1;
    for (int i = 2; i < k + 1; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    printf("%d %d", dp[k - 1], dp[k]);
    return 0;
}