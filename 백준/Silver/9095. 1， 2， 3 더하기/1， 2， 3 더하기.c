#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int dp[11] = {0, 1, 2, 4, 0, 0, 0, 0, 0, 0, 0};
        if (n >= 4) {
            for (int i = 4; i < n + 1; i++)
                dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        printf("%d\n", dp[n]);
    }
    return 0;
}