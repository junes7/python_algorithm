#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int F(int* memo, int n) {
    int mod = 10007;
    if (n <= 2) return n;
    if (memo[n] > 0) return memo[n];
    memo[n] = F(memo, n - 1) + F(memo, n - 2);
    memo[n] %= mod;
    return memo[n];
}
int main(void) {
    int n;
    scanf("%d", &n);
    int* memo = (int*)malloc(sizeof(int) * (n + 1));
    memset(memo, 0, sizeof(int) * (n + 1));
    printf("%d", F(memo, n));
    return 0;
}