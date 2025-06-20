#include <stdio.h>
int main(void) {
    long long f = 1, n;
    scanf("%lld", &n);
    for (long long i = 2; i < n + 1; i++) {
        f *= i;
        while (f % 10 == 0)
            f /= 10;
        f %= 1000000000000LL;
    }
    printf("%lld", f % 10);
    return 0;
}