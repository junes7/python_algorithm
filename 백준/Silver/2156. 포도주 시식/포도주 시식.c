#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int solve(int *wine, int *memo, int n) {
    int temp, case1, case2, case3;
    if (n == 0)
        return wine[0];
    else if (n == 1)
        return wine[0] + wine[1];
    else if (n == 2) {
        temp = wine[0] > wine[1] ? wine[0] : wine[1];
        return solve(wine, memo, 1) > (temp + wine[2]) ? solve(wine, memo, 1) : temp + wine[2];
    }
    if (memo[n] != -1) return memo[n];
    case1 = solve(wine, memo, n - 1);
    case2 = solve(wine, memo, n - 2) + wine[n];
    case3 = solve(wine, memo, n - 3) + wine[n - 1] + wine[n];
    memo[n] = case1 > case2 ? (case1 > case3 ? case1 : case3) : (case2 > case3 ? case2 : case3);
    return memo[n];
}
int main(void) {
    int n, *wine, *memo;
    scanf("%d", &n);
    wine = (int *)malloc(sizeof(int) * n);
    memo = (int *)malloc(sizeof(int) * n);
    memset(memo, -1, sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &wine[i]);
    printf("%d", solve(wine, memo, n - 1));
    return 0;
}