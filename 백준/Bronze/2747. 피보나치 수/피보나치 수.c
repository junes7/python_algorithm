#include <stdio.h>
#include <stdlib.h>
int fibo(int *memo, int n) {
    if (n < 2)
        return n;
    if (memo[n])
        return memo[n];
    memo[n] = fibo(memo, n - 1) + fibo(memo, n - 2);
    return memo[n];
}
int main(void) {
    int n;
    scanf("%d", &n);
    int *memo = (int *)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n + 1; i++)
        memo[i] = 0;
    printf("%d", fibo(memo, n));
    return 0;
}