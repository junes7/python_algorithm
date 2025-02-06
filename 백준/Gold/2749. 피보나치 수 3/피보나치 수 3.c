#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long fibo(long long n) {
    int mod = 1000000;
    int p = mod / 10 * 15;
    int *fib = (int *)malloc(sizeof(int) * p);
    memset(fib, 0, sizeof(int) * p);
    fib[1] = 1;
    for (int i = 2; i < p; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        fib[i] %= mod;
    }
    return fib[n % p];
}
int main(void) {
    long long n;
    scanf("%lld", &n);
    printf("%lld", fibo(n));
    return 0;
}