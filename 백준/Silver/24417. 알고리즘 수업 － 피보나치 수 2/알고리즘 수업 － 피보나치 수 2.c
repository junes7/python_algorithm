#include <stdio.h>
long long fibo(int n) {
    long long a = 0, b = 1, t;
    for (int i = 2; i < n + 1; i++) {
        t = a;
        a = b;
        b = (t + b) % 1000000007;
    }
    return b;
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%lld %d", fibo(n), n - 2);
    return 0;
}