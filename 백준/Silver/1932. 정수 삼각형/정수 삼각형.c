#include <stdio.h>
#include <stdlib.h>
int max_path_length(int n, int** triangle) {
    int maxn = 0, **dp = (int**)malloc(sizeof(int*) * n);
    for (int i = 1; i < n + 1; i++) {
        dp[i - 1] = (int*)malloc(sizeof(int) * i);
        for (int j = 0; j < i; j++)
            dp[i - 1][j] = 0;
    }
    dp[0][0] = triangle[0][0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0)
                dp[i][j] = dp[i - 1][j] + triangle[i][0];
            else if (j == i)
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][i];
            else
                dp[i][j] = (dp[i - 1][j - 1] > dp[i - 1][j] ? dp[i - 1][j - 1] : dp[i - 1][j]) + triangle[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        if (maxn < dp[n - 1][i])
            maxn = dp[n - 1][i];
    }
    return maxn;
}
int main(void) {
    int n;
    scanf("%d", &n);
    int** triangle = (int**)malloc(sizeof(int*) * n);
    for (int i = 1; i < n + 1; i++) {
        triangle[i - 1] = (int*)malloc(sizeof(int) * i);
        for (int j = 0; j < i; j++) {
            scanf("%d", &triangle[i - 1][j]);
        }
    }
    printf("%d", max_path_length(n, triangle));
    return 0;
}