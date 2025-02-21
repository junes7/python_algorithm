#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int solve(int *ti, int *pi, int *memo, int n, int day) {
    int case1, case2;
    if (n <= day) return 0;
    if (memo[day]) return memo[day];
    case1 = solve(ti, pi, memo, n, day + 1), case2 = 0;
    if (day + ti[day] <= n)
        case2 = solve(ti, pi, memo, n, day + ti[day]) + pi[day];
    memo[day] = case1 > case2 ? case1 : case2;
    return memo[day];
}
int main(void) {
    int n, *ti, *pi, *memo;
    scanf("%d", &n);
    ti = (int *)malloc(sizeof(int) * n);
    pi = (int *)malloc(sizeof(int) * n);
    memo = (int *)malloc(sizeof(int) * (n + 1));
    memset(memo, 0, sizeof(int) * (n + 1));
    for (int i = 0; i < n; i++)
        scanf("%d %d", &ti[i], &pi[i]);
    printf("%d", solve(ti, pi, memo, n, 0));
    return 0;
}