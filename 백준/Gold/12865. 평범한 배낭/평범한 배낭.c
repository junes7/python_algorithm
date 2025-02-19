#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int solve(int *W, int *V, int **memo, int n, int k) {
    int case1, case2, prev_k;
    if (n < 0) return 0;
    if (memo[n][k] != -1) return memo[n][k];
    case1 = 0, prev_k = k - W[n];
    if (0 <= prev_k)
        case1 = solve(W, V, memo, n - 1, prev_k) + V[n];
    case2 = solve(W, V, memo, n - 1, k);
    memo[n][k] = case1 > case2 ? case1 : case2;
    return memo[n][k];
}
int main(void) {
    int n, k, *W, *V, **memo;
    scanf("%d %d", &n, &k);
    W = (int *)malloc(sizeof(int) * n);
    V = (int *)malloc(sizeof(int) * n);
    memo = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &W[i], &V[i]);
        memo[i] = (int *)malloc(sizeof(int) * (k + 1));
        memset(memo[i], -1, sizeof(int) * (k + 1));
    }
    printf("%d", solve(W, V, memo, n - 1, k));
    return 0;
}