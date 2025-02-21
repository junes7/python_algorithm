#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dy[4] = {-1, 1, 0, 0}, dx[4] = {0, 0, -1, 1};
int solve(int **arr, int **dp, int m, int n, int y, int x) {
    int ny, nx;
    if (y == m - 1 && x == n - 1) return 1;
    if (dp[y][x] != -1) return dp[y][x];
    dp[y][x] = 0;
    for (int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if (0 <= ny && ny < m && 0 <= nx && nx < n) {
            if (arr[ny][nx] < arr[y][x]) {
                dp[y][x] += solve(arr, dp, m, n, ny, nx);
            }
        }
    }
    return dp[y][x];
}
int main(void) {
    int m, n, **arr, **dp;
    scanf("%d %d", &m, &n);
    arr = (int **)malloc(sizeof(int *) * m);
    dp = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++) {
        arr[i] = (int *)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
        dp[i] = (int *)malloc(sizeof(int) * n);
        memset(dp[i], -1, sizeof(int) * n);
    }
    printf("%d", solve(arr, dp, m, n, 0, 0));
    return 0;
}