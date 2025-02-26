#include <stdio.h>
int main(void) {
    long long n, m, r;
    scanf("%lld %lld", &n, &m);
    r = n - m >= 0 ? n - m : m - n;
    printf("%lld", r);
    return 0;
}