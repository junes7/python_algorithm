#include <stdio.h>
int main(void) {
    long long n;
    scanf("%lld", &n);
    printf("%lld", ((n * (n + 1) / 2) * 3 + 1 + n) % 45678);
    return 0;
}