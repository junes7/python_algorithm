#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, k, case1, case2, prev_k, maxn = 987654321;
    scanf("%d %d", &n, &k);
    int *coins = (int *)malloc(sizeof(int) * n);
    int **memo = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
        memo[i] = (int *)malloc(sizeof(int) * (k + 1));
        memset(memo[i], maxn, sizeof(int) * (k + 1));
    }
    for (int i = 0; i < n; i++) {
        memo[i][0] = 0;
        for (int j = 1; j < k + 1; j++) {
            case1 = maxn, case2 = maxn, prev_k = j - coins[i];
            if (0 <= prev_k) case1 = memo[i][prev_k] + 1;
            if (i > 0) case2 = memo[i - 1][j];
            memo[i][j] = case1 < case2 ? case1 : case2;
        }
    }
    printf("%d", memo[n - 1][k] == maxn ? -1 : memo[n - 1][k]);
    return 0;
}