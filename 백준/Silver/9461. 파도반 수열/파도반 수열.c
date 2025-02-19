#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n;
    long dp[100] = {0, 1, 1, 1, 2, 2};
    for (int i = 6; i < 101; i++)
        dp[i] = dp[i - 1] + dp[i - 5];
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("%ld\n", dp[n]);
    }
    return 0;
}