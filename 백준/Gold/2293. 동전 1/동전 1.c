#include <stdio.h>
#include <stdlib.h>
int coin_count_cases(int n, int k, int* coins) {
    int* dp = (int*)malloc(sizeof(int) * (k + 1));
    for (int i = 0; i < k + 1; i++)
        dp[i] = 0;
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = coins[i]; j < k + 1; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }
    return dp[k];
}
int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    int* coins = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &coins[i]);
    printf("%d", coin_count_cases(n, k, coins));
    return 0;
}